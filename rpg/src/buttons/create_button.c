/*
** EPITECH PROJECT, 2023
** buttons
** File description:
** ff
*/

#include "struct.h"

void set_button_new_game(btn_t *btn)
{
    btn[0].scale.x = 500;
    btn[0].scale.y = 150;
    btn[0].pos.x = 1370;
    btn[0].pos.y = 270;
    btn[0].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[0].rect, btn[0].scale);
    sfRectangleShape_setFillColor(btn[0].rect, sfTransparent);
    sfRectangleShape_setPosition(btn[0].rect, btn[0].pos);
    sfRectangleShape_setOutlineColor(btn[0].rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(btn[0].rect, 2.f);
}

void set_button_savegarde(btn_t *btn)
{
    btn[1].scale.x = 500;
    btn[1].scale.y = 150;
    btn[1].pos.x = 1370;
    btn[1].pos.y = 450;
    btn[1].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[1].rect, btn[1].scale);
    sfRectangleShape_setFillColor(btn[1].rect, sfTransparent);
    sfRectangleShape_setPosition(btn[1].rect, btn[1].pos);
    sfRectangleShape_setOutlineColor(btn[1].rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(btn[1].rect, 2.f);
}

void set_button_credit(btn_t *btn)
{
    btn[2].scale.x = 500;
    btn[2].scale.y = 150;
    btn[2].pos.x = 1370;
    btn[2].pos.y = 630;
    btn[2].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[2].rect, btn[2].scale);
    sfRectangleShape_setFillColor(btn[2].rect, sfTransparent);
    sfRectangleShape_setPosition(btn[2].rect, btn[2].pos);
    sfRectangleShape_setOutlineColor(btn[2].rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(btn[2].rect, 2.f);
}

void set_button_quit(btn_t *btn)
{
    btn[3].scale.x = 500;
    btn[3].scale.y = 150;
    btn[3].pos.x = 1370;
    btn[3].pos.y = 810;
    btn[3].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[3].rect, btn[3].scale);
    sfRectangleShape_setFillColor(btn[3].rect, sfTransparent);
    sfRectangleShape_setPosition(btn[3].rect, btn[3].pos);
    sfRectangleShape_setOutlineColor(btn[3].rect, sfTransparent);
    sfRectangleShape_setOutlineThickness(btn[3].rect, 2.f);
}

void set_button_setting(btn_t *btn)
{
    btn[4].scale.x = 50;
    btn[4].scale.y = 50;
    btn[4].pos.x = 1820;
    btn[4].pos.y = 50;
    btn[4].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[4].rect, btn[4].scale);
    sfRectangleShape_setFillColor(btn[4].rect, sfTransparent);
    sfRectangleShape_setPosition(btn[4].rect, btn[4].pos);
    sfRectangleShape_setOutlineColor(btn[4].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[4].rect, 2.f);
}
