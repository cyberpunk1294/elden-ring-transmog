#pragma once

#include <map>
#include <string>

struct Messages
{
    std::u16string event_text_for_talk_transmog_armor;
    std::u16string event_text_for_talk_transmog_head;
    std::u16string event_text_for_talk_transmog_body;
    std::u16string event_text_for_talk_transmog_arms;
    std::u16string event_text_for_talk_transmog_legs;
    std::u16string event_text_for_talk_undo_transmog;
    std::u16string menu_text_transmog_head;
    std::u16string menu_text_transmog_body;
    std::u16string menu_text_transmog_arms;
    std::u16string menu_text_transmog_legs;
    std::u16string protector_name_invisible;
    std::u16string line_help_select_transmog_target;
    std::u16string dialogues_transmog_head_prompt;
    std::u16string dialogues_transmog_body_prompt;
    std::u16string dialogues_transmog_arms_prompt;
    std::u16string dialogues_transmog_legs_prompt;
};

static const std::map<std::string, Messages> transmog_messages_by_lang = {
    {"english",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrify armor",
         .event_text_for_talk_transmog_head = u"Transmogrify head",
         .event_text_for_talk_transmog_body = u"Transmogrify body",
         .event_text_for_talk_transmog_arms = u"Transmogrify arms",
         .event_text_for_talk_transmog_legs = u"Transmogrify legs",
         .event_text_for_talk_undo_transmog = u"Dispel transmogrification",
         .menu_text_transmog_head = u"Transmogrify Head",
         .menu_text_transmog_body = u"Transmogrify Body",
         .menu_text_transmog_arms = u"Transmogrify Arms",
         .menu_text_transmog_legs = u"Transmogrify Legs",
         .protector_name_invisible = u"Invisible",
         .line_help_select_transmog_target = u"Select target for transmogrification",
         .dialogues_transmog_head_prompt = u"Transmogrify head to <?itemName?>?",
         .dialogues_transmog_body_prompt = u"Transmogrify body to <?itemName?>?",
         .dialogues_transmog_arms_prompt = u"Transmogrify arms to <?itemName?>?",
         .dialogues_transmog_legs_prompt = u"Transmogrify legs to <?itemName?>?",
     }},
    {"german",
     {
         .event_text_for_talk_transmog_armor = u"Rüstung transmogrifizieren",
         .event_text_for_talk_transmog_head = u"Kopf transmogrifizieren",
         .event_text_for_talk_transmog_body = u"Körper transmogrifizieren",
         .event_text_for_talk_transmog_arms = u"Arme transmogrifizieren",
         .event_text_for_talk_transmog_legs = u"Beine transmogrifizieren",
         .event_text_for_talk_undo_transmog = u"Transmogrifikation deaktivieren",
         .menu_text_transmog_head = u"Kopf transmogrifizieren",
         .menu_text_transmog_body = u"Körper transmogrifizieren",
         .menu_text_transmog_arms = u"Arme transmogrifizieren",
         .menu_text_transmog_legs = u"Beine transmogrifizieren",
         .protector_name_invisible = u"Unsichtbar",
         .line_help_select_transmog_target = u"Ziel für die Transmogrifizierung auswählen",
         .dialogues_transmog_head_prompt = u"Transmogrifizieren kopf zu <?itemName?>?",
         .dialogues_transmog_body_prompt = u"Transmogrifizieren körper zu <?itemName?>?",
         .dialogues_transmog_arms_prompt = u"Transmogrifizieren arme zu <?itemName?>?",
         .dialogues_transmog_legs_prompt = u"Transmogrifizieren beine zu <?itemName?>?",
     }},
    {"french",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrifier l'armure",
         .event_text_for_talk_transmog_head = u"Transmogrifier la tête",
         .event_text_for_talk_transmog_body = u"Transmogrifier le corps",
         .event_text_for_talk_transmog_arms = u"Transmogrifier les bras",
         .event_text_for_talk_transmog_legs = u"Transmogrifier les jambes",
         .event_text_for_talk_undo_transmog = u"Dissiper la transmogrification",
         .menu_text_transmog_head = u"Transmogrifier la tête",
         .menu_text_transmog_body = u"Transmogrifier le corps",
         .menu_text_transmog_arms = u"Transmogrifier les bras",
         .menu_text_transmog_legs = u"Transmogrifier les jambes",
         .protector_name_invisible = u"Invisible",
         .line_help_select_transmog_target = u"Sélectionner la cible de la transmogrification",
         .dialogues_transmog_head_prompt = u"Transmogrifier la tête en <?itemName?> ?",
         .dialogues_transmog_body_prompt = u"Transmogrifier le corps en <?itemName?> ?",
         .dialogues_transmog_arms_prompt = u"Transmogrifier les bras en <?itemName?> ?",
         .dialogues_transmog_legs_prompt = u"Transmogrifier les jambes en <?itemName?> ?",
     }},
    {"italian",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrifica l'armatura",
         .event_text_for_talk_transmog_head = u"Transmogrifica della testa",
         .event_text_for_talk_transmog_body = u"Transmogrifica del corpo",
         .event_text_for_talk_transmog_arms = u"Transmogrifica delle braccia",
         .event_text_for_talk_transmog_legs = u"Transmogrifica gambe",
         .event_text_for_talk_undo_transmog = u"Dissipi la transmogrificazione",
         .menu_text_transmog_head = u"Transmogrifica della testa",
         .menu_text_transmog_body = u"Transmogrifica del corpo",
         .menu_text_transmog_arms = u"Transmogrifica delle braccia",
         .menu_text_transmog_legs = u"Transmogrifica gambe",
         .protector_name_invisible = u"Invisibile",
         .line_help_select_transmog_target = u"Seleziona il bersaglio della transmogrificazione",
         .dialogues_transmog_head_prompt = u"Transmogrifica la testa in <?itemName?>?",
         .dialogues_transmog_body_prompt = u"Transmogrifica il corpo in <?itemName?>?",
         .dialogues_transmog_arms_prompt = u"Transmogrifica le braccia in <?itemName?>?",
         .dialogues_transmog_legs_prompt = u"Transmogrifica le gambe in <?itemName?>?",
     }},
    {"polish",
     {
         .event_text_for_talk_transmog_armor = u"Transmogryfikuj zbroje",
         .event_text_for_talk_transmog_head = u"Transmogryfikuj głowe",
         .event_text_for_talk_transmog_body = u"Transmogryfikuj ciało",
         .event_text_for_talk_transmog_arms = u"Transmogryfikuj ramiona",
         .event_text_for_talk_transmog_legs = u"Transmogryfikuj nogi",
         .event_text_for_talk_undo_transmog = u"Dispel transmogrification", // TODO
         .menu_text_transmog_head = u"Transmogryfikuj głowe",
         .menu_text_transmog_body = u"Transmogryfikuj ciało",
         .menu_text_transmog_arms = u"Transmogryfikuj ramiona",
         .menu_text_transmog_legs = u"Transmogryfikuj nogi",
         .protector_name_invisible = u"Niewidzialny",
         .line_help_select_transmog_target = u"Select target for transmogrification", // TODO
         .dialogues_transmog_head_prompt = u"Transmogrify head to <?itemName?>?",     // TODO
         .dialogues_transmog_body_prompt = u"Transmogrify body to <?itemName?>?",     // TODO
         .dialogues_transmog_arms_prompt = u"Transmogrify arms to <?itemName?>?",     // TODO
         .dialogues_transmog_legs_prompt = u"Transmogrify legs to <?itemName?>?",     // TODO
     }},
    {"brazilian",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrificar armadura",
         .event_text_for_talk_transmog_head = u"Transmogrificar cabeça",
         .event_text_for_talk_transmog_body = u"Transmogrificar corpo",
         .event_text_for_talk_transmog_arms = u"Transmogrificar braços",
         .event_text_for_talk_transmog_legs = u"Transmogrificar pernas",
         .event_text_for_talk_undo_transmog = u"Dissipar transmogrificação",
         .menu_text_transmog_head = u"Transmogrificar Cabeça",
         .menu_text_transmog_body = u"Transmogrificar Corpo",
         .menu_text_transmog_arms = u"Transmogrificar Braços",
         .menu_text_transmog_legs = u"Transmogrificar Pernas",
         .protector_name_invisible = u"Invisível",
         .line_help_select_transmog_target = u"Selecione o alvo da transmogrificação",
         .dialogues_transmog_head_prompt = u"Transmogrificar cabeça para <?itemName?>?",
         .dialogues_transmog_body_prompt = u"Transmogrificar corpo para <?itemName?>?",
         .dialogues_transmog_arms_prompt = u"Transmogrificar braços para <?itemName?>?",
         .dialogues_transmog_legs_prompt = u"Transmogrificar pernas para <?itemName?>?",
     }},
    {"latam",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrificar armadura",
         .event_text_for_talk_transmog_head = u"Transmogrificar cabeza",
         .event_text_for_talk_transmog_body = u"Transmogrificar cuerpo",
         .event_text_for_talk_transmog_arms = u"Transmogrificar brazos",
         .event_text_for_talk_transmog_legs = u"Transmogrificar piernas",
         .event_text_for_talk_undo_transmog = u"Disipar transmogrificación",
         .menu_text_transmog_head = u"Transmogrificar cabeza",
         .menu_text_transmog_body = u"Transmogrificar cuerpo",
         .menu_text_transmog_arms = u"Transmogrificar brazos",
         .menu_text_transmog_legs = u"Transmogrificar piernas",
         .protector_name_invisible = u"Invisible",
         .line_help_select_transmog_target = u"Selecciona el objetivo de la transmogrificación",
         .dialogues_transmog_head_prompt = u"Transmogrificar cabeza a <?itemName?>?",
         .dialogues_transmog_body_prompt = u"Transmogrificar cuerpo a <?itemName?>?",
         .dialogues_transmog_arms_prompt = u"Transmogrificar brazos a <?itemName?>?",
         .dialogues_transmog_legs_prompt = u"Transmogrificar piernas a <?itemName?>?",
     }},
    {"spanish",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrificar armadura",
         .event_text_for_talk_transmog_head = u"Transmogrificar cabeza",
         .event_text_for_talk_transmog_body = u"Transmogrificar cuerpo",
         .event_text_for_talk_transmog_arms = u"Transmogrificar brazos",
         .event_text_for_talk_transmog_legs = u"Transmogrificar piernas",
         .event_text_for_talk_undo_transmog = u"Disipar transmogrificación",
         .menu_text_transmog_head = u"Transmogrificar cabeza",
         .menu_text_transmog_body = u"Transmogrificar cuerpo",
         .menu_text_transmog_arms = u"Transmogrificar brazos",
         .menu_text_transmog_legs = u"Transmogrificar piernas",
         .protector_name_invisible = u"Invisible",
         .line_help_select_transmog_target = u"Selecciona el objetivo de la transmogrificación",
         .dialogues_transmog_head_prompt = u"Transmogrificar cabeza a <?itemName?>?",
         .dialogues_transmog_body_prompt = u"Transmogrificar cuerpo a <?itemName?>?",
         .dialogues_transmog_arms_prompt = u"Transmogrificar brazos a <?itemName?>?",
         .dialogues_transmog_legs_prompt = u"Transmogrificar piernas a <?itemName?>?",
     }},
    {"schinese",
     {
         .event_text_for_talk_transmog_armor = u"幻化装备",
         .event_text_for_talk_transmog_head = u"幻化头部",
         .event_text_for_talk_transmog_body = u"幻化胴体",
         .event_text_for_talk_transmog_arms = u"幻化手臂",
         .event_text_for_talk_transmog_legs = u"幻化腿部",
         .event_text_for_talk_undo_transmog = u"Dispel transmogrification", // TODO
         .menu_text_transmog_head = u"幻化头部装备",
         .menu_text_transmog_body = u"幻化胴体装备",
         .menu_text_transmog_arms = u"幻化手臂装备",
         .menu_text_transmog_legs = u"幻化腿部装备",
         .protector_name_invisible = u"无形",
         .line_help_select_transmog_target = u"Select target for transmogrification", // TODO
         .dialogues_transmog_head_prompt = u"Transmogrify head to <?itemName?>?",     // TODO
         .dialogues_transmog_body_prompt = u"Transmogrify body to <?itemName?>?",     // TODO
         .dialogues_transmog_arms_prompt = u"Transmogrify arms to <?itemName?>?",     // TODO
         .dialogues_transmog_legs_prompt = u"Transmogrify legs to <?itemName?>?",     // TODO
     }},
    {"tchinese",
     {
         .event_text_for_talk_transmog_armor = u"幻化裝備",
         .event_text_for_talk_transmog_head = u"幻化頭部",
         .event_text_for_talk_transmog_body = u"幻化胴體",
         .event_text_for_talk_transmog_arms = u"幻化手臂",
         .event_text_for_talk_transmog_legs = u"幻化腿部",
         .event_text_for_talk_undo_transmog = u"Dispel transmogrification", // TODO
         .menu_text_transmog_head = u"幻化頭部裝備",
         .menu_text_transmog_body = u"幻化胴體裝備",
         .menu_text_transmog_arms = u"幻化手臂裝備",
         .menu_text_transmog_legs = u"幻化腿部裝備",
         .protector_name_invisible = u"無形",
         .line_help_select_transmog_target = u"Select target for transmogrification", // TODO
         .dialogues_transmog_head_prompt = u"Transmogrify head to <?itemName?>?",     // TODO
         .dialogues_transmog_body_prompt = u"Transmogrify body to <?itemName?>?",     // TODO
         .dialogues_transmog_arms_prompt = u"Transmogrify arms to <?itemName?>?",     // TODO
         .dialogues_transmog_legs_prompt = u"Transmogrify legs to <?itemName?>?",     // TODO
     }},
};
