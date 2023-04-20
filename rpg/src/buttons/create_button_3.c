/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** intro_window.c
*/

#include "struct.h"
#include "rpg.h"

void set_intro_yes_rect(btn_t *btn)
{
    sfVector2f pos_rect = {500, 750};
    sfVector2f size_rect = {100, 75};
    int thickness = 2;

    btn[10].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[10].rect, size_rect);
    sfRectangleShape_setFillColor(btn[10].rect, sfWhite);
    sfRectangleShape_setOutlineColor(btn[10].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[10].rect, thickness);
    sfRectangleShape_setPosition(btn[10].rect, pos_rect);
}

void set_intro_no_rect(btn_t *btn)
{
    sfVector2f pos_rect = { 500, 850 };
    sfVector2f size_rect = { 100, 75 };
    int thickness = 2;

    btn[11].rect = sfRectangleShape_create();
    sfRectangleShape_setSize(btn[11].rect, size_rect);
    sfRectangleShape_setFillColor(btn[11].rect, sfWhite);
    sfRectangleShape_setOutlineColor(btn[11].rect, sfBlack);
    sfRectangleShape_setOutlineThickness(btn[11].rect, thickness);
    sfRectangleShape_setPosition(btn[11].rect, pos_rect);
}
