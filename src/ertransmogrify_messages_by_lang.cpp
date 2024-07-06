#include "ertransmogrify_messages.hpp"

using namespace std;

/**
 * Map of Steam language names to messages used by the mod
 *
 * https://partner.steamgames.com/doc/store/localization/languages
 */
const map<string, ertransmogrify::msg::Messages> ertransmogrify::msg::messages_by_lang = {
    {"english",
     {
         .transmog_armor = L"Transmogrify armor",
         .transmog_head = L"Transmogrify head",
         .transmog_chest = L"Transmogrify chest",
         .transmog_arms = L"Transmogrify arms",
         .transmog_legs = L"Transmogrify legs",
         .undo_transmog = L"Dispel transmogrification",
         .transmog_head_title = L"Transmogrify Head",
         .transmog_chest_title = L"Transmogrify Chest",
         .transmog_arms_title = L"Transmogrify Arms",
         .transmog_legs_title = L"Transmogrify Legs",
         .invisible = L"Invisible",
         .select_transmog_target = L"Select target for transmogrification",
         .transmog_head_to = L"Transmogrify head to <?itemName?>?",
         .transmog_chest_to = L"Transmogrify chest to <?itemName?>?",
         .transmog_arms_to = L"Transmogrify arms to <?itemName?>?",
         .transmog_legs_to = L"Transmogrify legs to <?itemName?>?",
     }},
    // Deutsch (German) contributed by ivi
    {"german",
     {
         .transmog_armor = L"Rüstung transmogrifizieren",
         .transmog_head = L"Kopf transmogrifizieren",
         .transmog_chest = L"Brust transmogrifizieren",
         .transmog_arms = L"Arme transmogrifizieren",
         .transmog_legs = L"Beine transmogrifizieren",
         .undo_transmog = L"Transmogrifikation aufheben",
         .transmog_head_title = L"Kopf transmogrifizieren",
         .transmog_chest_title = L"Brust transmogrifizieren",
         .transmog_arms_title = L"Arme transmogrifizieren",
         .transmog_legs_title = L"Beine transmogrifizieren",
         .invisible = L"Unsichtbar",
         .select_transmog_target = L"Ziel für Transmogrifikation aussuchen",
         .transmog_head_to = L"Kopf zu <?itemName?> transmogrifizieren?",
         .transmog_chest_to = L"Brust zu <?itemName?> transmogrifizieren?",
         .transmog_arms_to = L"Arme zu <?itemName?> transmogrifizieren?",
         .transmog_legs_to = L"Beine zu <?itemName?> transmogrifizieren?",
     }},
    // Italiano (Italian) contributed by antro97
    {"italian",
     {
         .transmog_armor = L"Trasforma armatura",
         .transmog_head = L"Trasforma testa",
         .transmog_chest = L"Trasforma torace",
         .transmog_arms = L"Trasforma braccia",
         .transmog_legs = L"Trasforma gambe",
         .undo_transmog = L"Annulla trasformazione",
         .transmog_head_title = L"Trasforma Testa",
         .transmog_chest_title = L"Trasforma Torace",
         .transmog_arms_title = L"Trasforma Braccia",
         .transmog_legs_title = L"Trasforma Gambe",
         .invisible = L"Invisibile",
         .select_transmog_target = L"Seleziona oggetto per trasformazione",
         .transmog_head_to = L"Trasformare testa in <?itemName?>?",
         .transmog_chest_to = L"Trasformare torace in <?itemName?>?",
         .transmog_arms_to = L"Trasformare braccia in <?itemName?>?",
         .transmog_legs_to = L"Trasformare gambe in <?itemName?>?",
     }},
    // 日本語 (Japanese) contributed by Furisuke
    {"japanese",
     {
         .transmog_armor = L"衣装の姿変え",
         .transmog_head = L"兜の姿変え",
         .transmog_chest = L"胴鎧の姿変え",
         .transmog_arms = L"手甲の姿変え",
         .transmog_legs = L"足甲の姿変え",
         .undo_transmog = L"姿変えを解除する",
         .transmog_head_title = L"兜の姿変え",
         .transmog_chest_title = L"胴鎧の姿変え",
         .transmog_arms_title = L"手甲の姿変え",
         .transmog_legs_title = L"足甲の姿変え",
         .invisible = L"透明",
         .select_transmog_target = L"姿変えをする装備を選択してください",
         .transmog_head_to = L"兜を <?itemName?> に姿変えしますか？",
         .transmog_chest_to = L"胴鎧を <?itemName?> に姿変えしますか？",
         .transmog_arms_to = L"手甲を <?itemName?> に姿変えしますか？",
         .transmog_legs_to = L"足甲を <?itemName?> に姿変えしますか？",
     }},
    // Polski (Polish) contributed by Lumitko
    {"polish",
     {
         .transmog_armor = L"Transmogryfikuj zbroje",
         .transmog_head = L"Transmogryfikuj głowe",
         .transmog_chest = L"Transmogryfikuj ciało",
         .transmog_arms = L"Transmogryfikuj ramiona",
         .transmog_legs = L"Transmogryfikuj nogi",
         .undo_transmog = L"Usuń transmogryfikacje",
         .transmog_head_title = L"Transmogryfikuj głowe",
         .transmog_chest_title = L"Transmogryfikuj ciało",
         .transmog_arms_title = L"Transmogryfikuj ramiona",
         .transmog_legs_title = L"Transmogryfikuj nogi",
         .invisible = L"Niewidzialny",
         .select_transmog_target = L"Wybierz cel do transmogryfikacji",
         .transmog_head_to = L"Transmogrifikuj głowe na <?itemName?>?",
         .transmog_chest_to = L"Transmogrifikuj ciało na <?itemName?>?",
         .transmog_arms_to = L"Transmogrifikuj ramiona na <?itemName?>?",
         .transmog_legs_to = L"Transmogrifikuj nogi na <?itemName?>?",
     }},
    //  简体中文 (Simplified Chinese) contributed by 兵器君 (shintheweapon)
    {"schinese",
     {
         .transmog_armor = L"幻化装备",
         .transmog_head = L"幻化头部",
         .transmog_chest = L"幻化胴体",
         .transmog_arms = L"幻化手臂",
         .transmog_legs = L"幻化腿部",
         .undo_transmog = L"撤消幻化",
         .transmog_head_title = L"幻化头部装备",
         .transmog_chest_title = L"幻化胴体装备",
         .transmog_arms_title = L"幻化手臂装备",
         .transmog_legs_title = L"幻化腿部装备",
         .invisible = L"无形",
         .select_transmog_target = L"请选择幻化的目标",
         .transmog_head_to = L"幻化头部为 <?itemName?>?",
         .transmog_chest_to = L"幻化胴体为 <?itemName?>?",
         .transmog_arms_to = L"幻化手部为 <?itemName?>?",
         .transmog_legs_to = L"幻化腿部为 <?itemName?>?",
     }},
    // 繁體中文 (Traditional Chinese) contributed by 兵器君 (shintheweapon)
    {"tchinese",
     {
         .transmog_armor = L"幻化裝備",
         .transmog_head = L"幻化頭部",
         .transmog_chest = L"幻化胴體",
         .transmog_arms = L"幻化手臂",
         .transmog_legs = L"幻化腿部",
         .undo_transmog = L"撤消幻化",
         .transmog_head_title = L"幻化頭部裝備",
         .transmog_chest_title = L"幻化胴體裝備",
         .transmog_arms_title = L"幻化手臂裝備",
         .transmog_legs_title = L"幻化腿部裝備",
         .invisible = L"無形",
         .select_transmog_target = L"請選擇幻化的目標",
         .transmog_head_to = L"幻化頭部為 <?itemName?>?",
         .transmog_chest_to = L"幻化胴體為 <?itemName?>?",
         .transmog_arms_to = L"幻化手部為 <?itemName?>?",
         .transmog_legs_to = L"幻化腿部為 <?itemName?>?",
     }},
    // 한국어 (Korean) contributed by EKa001
    {"koreana",
     {
         .transmog_armor = L"갑옷 변형",
         .transmog_head = L"투구 변형",
         .transmog_chest = L"갑옷 변형",
         .transmog_arms = L"장갑 변형",
         .transmog_legs = L"각반 변형",
         .undo_transmog = L"변형 해제",
         .transmog_head_title = L"투구 변형",
         .transmog_chest_title = L"갑옷 변형",
         .transmog_arms_title = L"장갑 변형",
         .transmog_legs_title = L"각반 변형",
         .invisible = L"투명화",
         .select_transmog_target = L"변형시킬 장비를 선택해주십시오",
         .transmog_head_to = L"(를) <?itemName?>으로 변형하시겠습니까?",
         .transmog_chest_to = L"갑옷을(를) <?itemName?>으로 변형하시겠습니까?",
         .transmog_arms_to = L"장갑을(를) <?itemName?>으로 변형하시겠습니까?",
         .transmog_legs_to = L"각반을(를) <?itemName?>으로 변형하시겠습니까?",
     }},
    // Русский (Russian) contributed by kotovsky410
    {"russian",
     {
         .transmog_armor = L"Трансмогрификация брони",
         .transmog_head = L"Трансмогрификация шлема",
         .transmog_chest = L"Трансмогрификация нагрудника",
         .transmog_arms = L"Трансмогрификация наручей",
         .transmog_legs = L"Трансмогрификация поножей",
         .undo_transmog = L"Развеять трансмогрификацию",
         .transmog_head_title = L"Трансмогрификация шлема",
         .transmog_chest_title = L"Трансмогрификация нагрудника",
         .transmog_arms_title = L"Трансмогрификация наручей",
         .transmog_legs_title = L"Трансмогрификация поножей",
         .invisible = L"невидимый",
         .select_transmog_target = L"Выберите цель для трансмогрификации",
         .transmog_head_to = L"Трансмогрифицировать шлем в <?itemName?> ?",
         .transmog_chest_to = L"Трансмогрифицировать нагрудник в <?itemName?> ?",
         .transmog_arms_to = L"Трансмогрифицировать наручи в <?itemName?> ?",
         .transmog_legs_to = L"Трансмогрифицировать поножи в <?itemName?> ?",
     }},
    // Machine translated
    {"french",
     {
         .transmog_armor = L"Transmogrifier l'armure",
         .transmog_head = L"Transmogrifier la tête",
         .transmog_chest = L"Transmogrifier le corps",
         .transmog_arms = L"Transmogrifier les bras",
         .transmog_legs = L"Transmogrifier les jambes",
         .undo_transmog = L"Dissiper la transmogrification",
         .transmog_head_title = L"Transmogrifier la tête",
         .transmog_chest_title = L"Transmogrifier le corps",
         .transmog_arms_title = L"Transmogrifier les bras",
         .transmog_legs_title = L"Transmogrifier les jambes",
         .invisible = L"Invisible",
         .select_transmog_target = L"Sélectionner la cible de la transmogrification",
         .transmog_head_to = L"Transmogrifier la tête en <?itemName?> ?",
         .transmog_chest_to = L"Transmogrifier le corps en <?itemName?> ?",
         .transmog_arms_to = L"Transmogrifier les bras en <?itemName?> ?",
         .transmog_legs_to = L"Transmogrifier les jambes en <?itemName?> ?",
     }},
    // Machine translated
    {"brazilian",
     {
         .transmog_armor = L"Transmogrificar armadura",
         .transmog_head = L"Transmogrificar cabeça",
         .transmog_chest = L"Transmogrificar corpo",
         .transmog_arms = L"Transmogrificar braços",
         .transmog_legs = L"Transmogrificar pernas",
         .undo_transmog = L"Dissipar transmogrificação",
         .transmog_head_title = L"Transmogrificar Cabeça",
         .transmog_chest_title = L"Transmogrificar Corpo",
         .transmog_arms_title = L"Transmogrificar Braços",
         .transmog_legs_title = L"Transmogrificar Pernas",
         .invisible = L"Invisível",
         .select_transmog_target = L"Selecione o alvo da transmogrificação",
         .transmog_head_to = L"Transmogrificar cabeça para <?itemName?>?",
         .transmog_chest_to = L"Transmogrificar corpo para <?itemName?>?",
         .transmog_arms_to = L"Transmogrificar braços para <?itemName?>?",
         .transmog_legs_to = L"Transmogrificar pernas para <?itemName?>?",
     }},
    // Machine translated
    {"latam",
     {
         .transmog_armor = L"Transmogrificar armadura",
         .transmog_head = L"Transmogrificar cabeza",
         .transmog_chest = L"Transmogrificar cuerpo",
         .transmog_arms = L"Transmogrificar brazos",
         .transmog_legs = L"Transmogrificar piernas",
         .undo_transmog = L"Disipar transmogrificación",
         .transmog_head_title = L"Transmogrificar cabeza",
         .transmog_chest_title = L"Transmogrificar cuerpo",
         .transmog_arms_title = L"Transmogrificar brazos",
         .transmog_legs_title = L"Transmogrificar piernas",
         .invisible = L"Invisible",
         .select_transmog_target = L"Selecciona el objetivo de la transmogrificación",
         .transmog_head_to = L"Transmogrificar cabeza a <?itemName?>?",
         .transmog_chest_to = L"Transmogrificar cuerpo a <?itemName?>?",
         .transmog_arms_to = L"Transmogrificar brazos a <?itemName?>?",
         .transmog_legs_to = L"Transmogrificar piernas a <?itemName?>?",
     }},
    // Machine translated
    {"spanish",
     {
         .transmog_armor = L"Transmogrificar armadura",
         .transmog_head = L"Transmogrificar cabeza",
         .transmog_chest = L"Transmogrificar cuerpo",
         .transmog_arms = L"Transmogrificar brazos",
         .transmog_legs = L"Transmogrificar piernas",
         .undo_transmog = L"Disipar transmogrificación",
         .transmog_head_title = L"Transmogrificar cabeza",
         .transmog_chest_title = L"Transmogrificar cuerpo",
         .transmog_arms_title = L"Transmogrificar brazos",
         .transmog_legs_title = L"Transmogrificar piernas",
         .invisible = L"Invisible",
         .select_transmog_target = L"Selecciona el objetivo de la transmogrificación",
         .transmog_head_to = L"Transmogrificar cabeza a <?itemName?>?",
         .transmog_chest_to = L"Transmogrificar cuerpo a <?itemName?>?",
         .transmog_arms_to = L"Transmogrificar brazos a <?itemName?>?",
         .transmog_legs_to = L"Transmogrificar piernas a <?itemName?>?",
     }},
    // ไทย (Thai) not yet supported
    // {"thai",
    //  {
    //      .transmog_armor = L"",
    //      .transmog_head = L"",
    //      .transmog_chest = L"",
    //      .transmog_arms = L"",
    //      .transmog_legs = L"",
    //      .undo_transmog = L"",
    //      .transmog_head_title = L"",
    //      .transmog_chest_title = L"",
    //      .transmog_arms_title = L"",
    //      .transmog_legs_title = L"",
    //      .invisible = L"",
    //      .select_transmog_target = L"",
    //      .transmog_head_to = L"",
    //      .transmog_chest_to = L"",
    //      .transmog_arms_to = L"",
    //      .transmog_legs_to = L"",
    //  }},
    // العربية (Arabic) not yet supported
    // {"arabic",
    //  {
    //      .transmog_armor = L"",
    //      .transmog_head = L"",
    //      .transmog_chest = L"",
    //      .transmog_arms = L"",
    //      .transmog_legs = L"",
    //      .undo_transmog = L"",
    //      .transmog_head_title = L"",
    //      .transmog_chest_title = L"",
    //      .transmog_arms_title = L"",
    //      .transmog_legs_title = L"",
    //      .invisible = L"",
    //      .select_transmog_target = L"",
    //      .transmog_head_to = L"",
    //      .transmog_chest_to = L"",
    //      .transmog_arms_to = L"",
    //      .transmog_legs_to = L"",
    //  }},
};
