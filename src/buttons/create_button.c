/*
** EPITECH PROJECT, 2023
** buttons
** File description:
** ff
*/

#include "struct.h"

void set_buton_play(btn_t *btn)
{
    btn[0].scale.x = 500;
    btn[0].scale.y = 150;
    btn[0].pos.x = 1370;
    btn[0].pos.y = 270;
    btn[0].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[0].rect, btn[0].scale);
    sfRectangleShape_setPosition(btn[0].rect, btn[0].pos);
    sfRectangleShape_setOutlineColor(btn[0].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[0].rect, 2.f);
}
