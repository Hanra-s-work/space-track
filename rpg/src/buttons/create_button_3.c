/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** create_button_3.c
*/

#include "rpg.h"
#include "struct.h"

void set_button_help(btn_t *btn)
{
    btn[10].scale.x = 280;
    btn[10].scale.y = 150;
    btn[10].pos.x = 1000;
    btn[10].pos.y = 210;
    btn[10].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[10].rect, btn[10].scale);
    sfRectangleShape_setPosition(btn[10].rect, btn[10].pos);
    sfRectangleShape_setOutlineColor(btn[10].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[10].rect, 2.f);
}
