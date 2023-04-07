/*
** EPITECH PROJECT, 2023
** create_button
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

void set_button_setting_quit_save(btn_t *btn)
{
    btn[5].scale.x = 280;
    btn[5].scale.y = 150;
    btn[5].pos.x = 20;
    btn[5].pos.y = 400;
    btn[5].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[5].rect, btn[5].scale);
    sfRectangleShape_setPosition(btn[5].rect, btn[5].pos);
    sfRectangleShape_setOutlineColor(btn[5].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[5].rect, 2.f);
}

void set_button_setting_continue(btn_t *btn)
{
    btn[6].scale.x = 280;
    btn[6].scale.y = 150;
    btn[6].pos.x = 20;
    btn[6].pos.y = 220;
    btn[6].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[6].rect, btn[6].scale);
    sfRectangleShape_setPosition(btn[6].rect, btn[6].pos);
    sfRectangleShape_setOutlineColor(btn[6].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[6].rect, 2.f);
}

void set_button_setting_restart(btn_t *btn)
{
    btn[7].scale.x = 280;
    btn[7].scale.y = 150;
    btn[7].pos.x = 20;
    btn[7].pos.y = 40;
    btn[7].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[7].rect, btn[7].scale);
    sfRectangleShape_setPosition(btn[7].rect, btn[7].pos);
    sfRectangleShape_setOutlineColor(btn[7].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[7].rect, 2.f);
}
