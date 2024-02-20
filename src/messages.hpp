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

// TODO translate messages into all supported languages
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
         .event_text_for_talk_transmog_armor = u"Transmogrifiziere die rüstung",
         .event_text_for_talk_transmog_head = u"Transmogrifiziere den kopf",
         .event_text_for_talk_transmog_body = u"Transmogrifiziere den körper",
         .event_text_for_talk_transmog_arms = u"Transmogrifiziere die arme",
         .event_text_for_talk_transmog_legs = u"Transmogrifiziere die beine",
         .event_text_for_talk_undo_transmog = u"Machen Sie die Transmogrifizierung rückgängig",
         .menu_text_transmog_head = u"Transmogrifiziere den Kopf",
         .menu_text_transmog_body = u"Transmogrifiziere den Körper",
         .menu_text_transmog_arms = u"Transmogrifiziere die Arme",
         .menu_text_transmog_legs = u"Transmogrifiziere die Beine",
         .protector_name_invisible = u"Unsichtbar",
     }},
    {"french",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrifier l'armure",
         .event_text_for_talk_transmog_head = u"Transmogrifier la tête",
         .event_text_for_talk_transmog_body = u"Transmogrifier le corps",
         .event_text_for_talk_transmog_arms = u"Transmogrifier les bras",
         .event_text_for_talk_transmog_legs = u"Transmogrifier les jambes",
         .event_text_for_talk_undo_transmog = u"Annuler la transmogrification de l'armure équipée",
         .menu_text_transmog_head = u"Transmogrifier la Tête",
         .menu_text_transmog_body = u"Transmogrifier le Corps",
         .menu_text_transmog_arms = u"Transmogrifier les Bras",
         .menu_text_transmog_legs = u"Transmogrifier les Jambes",
         .protector_name_invisible = u"Invisible",
     }},
    {"italian",
     {
         .event_text_for_talk_transmog_armor = u"Trasmogrifica l'armatura",
         .event_text_for_talk_transmog_head = u"Trasmogrifica la testa",
         .event_text_for_talk_transmog_body = u"Trasmogrifica il corpo",
         .event_text_for_talk_transmog_arms = u"Trasmogrifica le braccia",
         .event_text_for_talk_transmog_legs = u"Trasmogrifica le gambe",
         .event_text_for_talk_undo_transmog =
             u"Disfai la trasmogrificazione dell'armatura equipaggiata",
         .menu_text_transmog_head = u"Trasmogrifica la Testa",
         .menu_text_transmog_body = u"Trasmogrifica il Corpo",
         .menu_text_transmog_arms = u"Trasmogrifica le Braccia",
         .menu_text_transmog_legs = u"Trasmogrifica le Gambe",
         .protector_name_invisible = u"Invisibile",
     }},
    {"polish",
     {
         .event_text_for_talk_transmog_armor = u"Transmogryfikuj zbroje",
         .event_text_for_talk_transmog_head = u"Transmogryfikuj głowe",
         .event_text_for_talk_transmog_body = u"Transmogryfikuj ciało",
         .event_text_for_talk_transmog_arms = u"Transmogryfikuj ramiona",
         .event_text_for_talk_transmog_legs = u"Transmogryfikuj nogi",
         .event_text_for_talk_undo_transmog = u"Odtransmogryfikuj założoną zbroje",
         .menu_text_transmog_head = u"Transmogryfikuj Głowe",
         .menu_text_transmog_body = u"Transmogryfikuj Ciało",
         .menu_text_transmog_arms = u"Transmogryfikuj Ramiona",
         .menu_text_transmog_legs = u"Transmogryfikuj Nogi",
         .protector_name_invisible = u"Niewidzialny",
     }},
    {"brazilian",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrifique a armadura",
         .event_text_for_talk_transmog_head = u"Transmogrifique a cabeça",
         .event_text_for_talk_transmog_body = u"Transmogrifique o corpo",
         .event_text_for_talk_transmog_arms = u"Transmogrifique os braços",
         .event_text_for_talk_transmog_legs = u"Transmogrifique as pernas",
         .event_text_for_talk_undo_transmog = u"Desfazer a transmogrificação da armadura equipada",
         .menu_text_transmog_head = u"Transmogrifique a Cabeça",
         .menu_text_transmog_body = u"Transmogrifique o Corpo",
         .menu_text_transmog_arms = u"Transmogrifique os Braços",
         .menu_text_transmog_legs = u"Transmogrifique as Pernas",
         .protector_name_invisible = u"Invisível",
     }},
    {"latam",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrificar la armadura",
         .event_text_for_talk_transmog_head = u"Transmogrificar la cabeza",
         .event_text_for_talk_transmog_body = u"Transmogrificar el cuerpo",
         .event_text_for_talk_transmog_arms = u"Transmogrificar los brazos",
         .event_text_for_talk_transmog_legs = u"Transmogrificar las piernas",
         .event_text_for_talk_undo_transmog = u"Deshacer la transmogrificación",
         .menu_text_transmog_head = u"Transmogrificar la Cabeza",
         .menu_text_transmog_body = u"Transmogrificar el Cuerpo",
         .menu_text_transmog_arms = u"Transmogrificar los Brazos",
         .menu_text_transmog_legs = u"Transmogrificar las Piernas",
         .protector_name_invisible = u"Invisible",
     }},
    {"spanish",
     {
         .event_text_for_talk_transmog_armor = u"Transmogrificar la armadura",
         .event_text_for_talk_transmog_head = u"Transmogrificar la cabeza",
         .event_text_for_talk_transmog_body = u"Transmogrificar el cuerpo",
         .event_text_for_talk_transmog_arms = u"Transmogrificar los brazos",
         .event_text_for_talk_transmog_legs = u"Transmogrificar las piernas",
         .event_text_for_talk_undo_transmog = u"Deshacer la transmogrificación",
         .menu_text_transmog_head = u"Transmogrificar la Cabeza",
         .menu_text_transmog_body = u"Transmogrificar el Cuerpo",
         .menu_text_transmog_arms = u"Transmogrificar los Brazos",
         .menu_text_transmog_legs = u"Transmogrificar las Piernas",
         .protector_name_invisible = u"Invisible",
     }},
    {"schinese",
     {
         .event_text_for_talk_transmog_armor = u"幻化装备",
         .event_text_for_talk_transmog_head = u"幻化头部",
         .event_text_for_talk_transmog_body = u"幻化胴体",
         .event_text_for_talk_transmog_arms = u"幻化手臂",
         .event_text_for_talk_transmog_legs = u"幻化腿部",
         .event_text_for_talk_undo_transmog = u"移除已穿戴装备的幻化",
         .menu_text_transmog_head = u"幻化头部装备",
         .menu_text_transmog_body = u"幻化胴体装备",
         .menu_text_transmog_arms = u"幻化手臂装备",
         .menu_text_transmog_legs = u"幻化腿部装备",
         .protector_name_invisible = u"无形",
     }},
    {"tchinese",
     {
         .event_text_for_talk_transmog_armor = u"幻化裝備",
         .event_text_for_talk_transmog_head = u"幻化頭部",
         .event_text_for_talk_transmog_body = u"幻化胴體",
         .event_text_for_talk_transmog_arms = u"幻化手臂",
         .event_text_for_talk_transmog_legs = u"幻化腿部",
         .event_text_for_talk_undo_transmog = u"移除已穿戴裝備的幻化",
         .menu_text_transmog_head = u"幻化頭部裝備",
         .menu_text_transmog_body = u"幻化胴體裝備",
         .menu_text_transmog_arms = u"幻化手臂裝備",
         .menu_text_transmog_legs = u"幻化腿部裝備",
         .protector_name_invisible = u"無形",
     }},
};
