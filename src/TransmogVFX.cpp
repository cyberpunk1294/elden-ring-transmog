#include <cstdint>
#include <iostream>
#include <tga/param_containers.h>
#include <tga/paramdefs.h>

#include "ModUtils.hpp"
#include "TransmogShop.hpp"
#include "TransmogVFX.hpp"

using namespace TransmogVFX;
using namespace std;

#pragma pack(push, 1)
struct FindReinforceParamProtectorResult
{
    int64_t id;
    ReinforceParamProtector *row;
};

struct FindEquipParamProtectorResult
{
    int32_t id;
    byte padding1[4];
    EquipParamProtector *row;
    int32_t base_id;
    byte padding2[4];
    FindReinforceParamProtectorResult reinforce_param_protector_result;
    uint32_t unknown;
};

struct FindSpEffectParamResult
{
    SpEffectParam *row;
    int32_t id;
    byte unknown;
};

struct FindSpEffectVfxParamResult
{
    int32_t id;
    byte padding[4];
    SpEffectVfxParam *row;
    uint16_t unknown;
};

#pragma pack(pop)

typedef void FindEquipParamProtectorFn(FindEquipParamProtectorResult *result, uint32_t id);
typedef void FindSpEffectParamFn(FindSpEffectParamResult *result, uint32_t id);
typedef void FindSpEffectVfxParamFn(FindSpEffectVfxParamResult *result, uint32_t id);

static FindEquipParamProtectorFn *get_equip_param_protector_hook;
static FindEquipParamProtectorFn *get_equip_param_protector;
static FindSpEffectParamFn *get_speffect_param_hook;
static FindSpEffectParamFn *get_speffect_param;
static FindSpEffectVfxParamFn *get_speffect_vfx_param_hook;
static FindSpEffectVfxParamFn *get_speffect_vfx_param;

static EquipParamProtector *transmog_head = nullptr;
static EquipParamProtector *transmog_body = nullptr;
static EquipParamProtector *transmog_arms = nullptr;
static EquipParamProtector *transmog_legs = nullptr;
static ReinforceParamProtector transmog_reinforce_param = {0};
static SpEffectParam transmog_speffect = {0};
static SpEffectVfxParam transmog_head_vfx = {0};
static SpEffectVfxParam transmog_body_vfx = {0};

static void get_equip_param_protector_detour(FindEquipParamProtectorResult *result, uint32_t id)
{
    switch (id)
    {
    case transmog_set_id + head_protector_offset:
    case transmog_set_alt_id + head_protector_offset:
        result->id = id;
        result->row = transmog_head;
        result->base_id = id;
        result->reinforce_param_protector_result.id = transmog_reinforce_param_id;
        result->reinforce_param_protector_result.row = &transmog_reinforce_param;
        break;
    case transmog_set_id + body_protector_offset:
    case transmog_set_alt_id + body_protector_offset:
        result->id = id;
        result->row = transmog_body;
        result->base_id = id;
        result->reinforce_param_protector_result.id = transmog_reinforce_param_id;
        result->reinforce_param_protector_result.row = &transmog_reinforce_param;
        break;
    case transmog_set_id + arms_protector_offset:
    case transmog_set_alt_id + arms_protector_offset:
        result->id = id;
        result->row = transmog_arms;
        result->base_id = id;
        result->reinforce_param_protector_result.id = transmog_reinforce_param_id;
        result->reinforce_param_protector_result.row = &transmog_reinforce_param;
        break;
    case transmog_set_id + legs_protector_offset:
    case transmog_set_alt_id + legs_protector_offset:
        result->id = id;
        result->row = transmog_legs;
        result->base_id = id;
        result->reinforce_param_protector_result.id = transmog_reinforce_param_id;
        result->reinforce_param_protector_result.row = &transmog_reinforce_param;
        break;
    default:
        get_equip_param_protector(result, id);
    }
}

static void get_speffect_param_detour(FindSpEffectParamResult *result, uint32_t id)
{
    switch (id)
    {
    case transmog_speffect_id:
        result->id = transmog_speffect_id;
        result->row = &transmog_speffect;
        result->unknown = byte(0x04);
        break;
    default:
        get_speffect_param(result, id);
    }
}

static void get_speffect_vfx_param_detour(FindSpEffectVfxParamResult *result, uint32_t id)
{
    switch (id)
    {
    case transmog_head_vfx_id:
        result->id = transmog_head_vfx_id;
        result->row = &transmog_head_vfx;
        result->unknown = 1;
        break;
    case transmog_body_vfx_id:
        result->id = transmog_body_vfx_id;
        result->row = &transmog_body_vfx;
        result->unknown = 1;
        break;
    default:
        get_speffect_vfx_param(result, id);
    }
}

void TransmogVFX::initialize(CS::ParamMap &params)
{
    auto equip_param_protector = params[L"EquipParamProtector"];
    auto reinforce_param_protector = params[L"ReinforceParamProtector"];
    auto speffect_param = params[L"SpEffectParam"];

    // Initialize to bare head/body/arms/legs
    transmog_head = reinterpret_cast<EquipParamProtector *>(equip_param_protector[10000]);
    transmog_body = reinterpret_cast<EquipParamProtector *>(equip_param_protector[10100]);
    transmog_arms = reinterpret_cast<EquipParamProtector *>(equip_param_protector[10200]);
    transmog_legs = reinterpret_cast<EquipParamProtector *>(equip_param_protector[10300]);

    // Initialize to reinforce level +0 (doesn't matter though because the armor is never equipped)
    transmog_reinforce_param =
        *reinterpret_cast<ReinforceParamProtector *>(reinforce_param_protector[0]);

    // Hook get_equip_param_protector() to return the above protectors and reinforce params. These
    // protectors are never equipped, but they're referenced by the transmog VFX params.
    get_equip_param_protector_hook = ModUtils::hook<>(
        {
            .aob = "41 8d 50 01"        // lea edx, [r8 + 1]
                   "e8 ?? ?? ?? ??"     // call SoloParamRepositoryImp::GetParamResCap
                   "48 85 c0"           // test rax, rax
                   "0f 84 ?? ?? ?? ??", // jz end_lbl
            .offset = -0x96,
        },
        get_equip_param_protector_detour, get_equip_param_protector);

    // Initialize the speffect from speffect 2 (basically a no-op effect), and override the VFX
    transmog_speffect = *reinterpret_cast<SpEffectParam *>(speffect_param[2]);
    transmog_speffect.vfxId = transmog_head_vfx_id;
    transmog_speffect.vfxId1 = transmog_body_vfx_id;
    transmog_speffect.effectEndurance = -1;
    transmog_speffect.effectTargetSelf = true;
    transmog_speffect.effectTargetFriend = true;
    transmog_speffect.effectTargetEnemy = true;
    transmog_speffect.effectTargetPlayer = true;
    transmog_speffect.effectTargetOpposeTarget = true;
    transmog_speffect.effectTargetFriendlyTarget = true;
    transmog_speffect.effectTargetSelfTarget = true;
    transmog_speffect.saveCategory = 5;

    // Hook get_speffect_param() to return the above speffect
    get_speffect_param_hook = ModUtils::hook<>(
        {
            .aob = "41 8d 50 0f"        // lea edx, [r8 + 15]
                   "e8 ?? ?? ?? ??"     // call SoloParamRepositoryImp::GetParamResCap
                   "48 85 c0"           // test rax, rax
                   "0f 84 ?? ?? ?? ??", // jz end_lbl
            .offset = -0x72,
        },
        get_speffect_param_detour, get_speffect_param);

    // Add two VFX for transforming the player's head and the rest of their body.
    // transformProtectorId should always be the ID of the head armor, and if
    // isFullBodyTransformProtectorId is true the VFX will instead apply the three other armor
    // pieces.
    transmog_head_vfx.transformProtectorId = transmog_set_id;
    transmog_head_vfx.isFullBodyTransformProtectorId = false;
    transmog_head_vfx.isVisibleDeadChr = true;
    transmog_head_vfx.initSfxId = 523412;
    transmog_head_vfx.initDmyId = 220;

    transmog_body_vfx.transformProtectorId = transmog_set_id;
    transmog_body_vfx.isFullBodyTransformProtectorId = true;
    transmog_body_vfx.isVisibleDeadChr = true;

    // Hook get_speffect_vfx_param() to return the above VFX params
    get_speffect_vfx_param_hook = ModUtils::hook<>(
        {
            .aob = "41 8d 50 10"    // lea edx, [r8 + 16]
                   "e8 ?? ?? ?? ??" // call SoloParamRepositoryImp::GetParamResCap
                   "48 85 c0"       // test rax, rax
                   "74 ??",         // jz end_lbl
            .offset = -0x6a,
        },
        get_speffect_vfx_param_detour, get_speffect_vfx_param);
}

void TransmogVFX::deinitialize()
{
    ModUtils::unhook(get_equip_param_protector_hook);
    ModUtils::unhook(get_speffect_param_hook);
    ModUtils::unhook(get_speffect_vfx_param_hook);
}

void TransmogVFX::set_transmog_protector(int64_t equip_param_protector_id)
{
    FindEquipParamProtectorResult protector_result;
    get_equip_param_protector(&protector_result, equip_param_protector_id);
    if (protector_result.row == nullptr)
    {
        cout << "Protector " << equip_param_protector_id << " doesn't exist" << endl;
        return;
    }

    auto equip_param_protector = protector_result.row;

    // Set the appropriate slot in the transmog protector set to point to the new armor piece
    switch (protector_result.row->protectorCategory)
    {
    case TransmogShop::protector_category_head:
        transmog_head = protector_result.row;
        cout << "Set head transmog to protector " << protector_result.id << endl;
        break;
    case TransmogShop::protector_category_body:
        transmog_body = protector_result.row;
        cout << "Set body transmog to protector " << protector_result.id << endl;
        break;
    case TransmogShop::protector_category_arms:
        transmog_arms = protector_result.row;
        cout << "Set arms transmog to protector " << protector_result.id << endl;
        break;
    case TransmogShop::protector_category_legs:
        transmog_legs = protector_result.row;
        cout << "Set legs transmog to protector " << protector_result.id << endl;
        break;
    }

    // Toggle the set between the default and alternate IDs to force the game to pick up the new
    // protector
    if (transmog_head_vfx.transformProtectorId == transmog_set_id)
    {
        transmog_head_vfx.transformProtectorId = transmog_set_alt_id;
        transmog_body_vfx.transformProtectorId = transmog_set_alt_id;
    }
    else
    {
        transmog_head_vfx.transformProtectorId = transmog_set_id;
        transmog_body_vfx.transformProtectorId = transmog_set_id;
    }
}