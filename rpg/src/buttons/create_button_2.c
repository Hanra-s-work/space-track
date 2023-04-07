/*
** EPITECH PROJECT, 2023
** create_button
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

void set_button_game_save(btn_t *btn)
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
