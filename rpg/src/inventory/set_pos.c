/*
** EPITECH PROJECT, 2022
** Paint
** File description:
** set_pos.c
*/

#include "struct.h"

void set_scale(sfSprite *sp)
{
    sfVector2f vec = {0.5, 0.5};
    sfSprite_setScale(sp, vec);
}

void set_pos(spt_t *brush, int x, int y)
{
    brush->positions.x = x;
    brush->positions.y = y;
    sfSprite_setPosition(brush->sprite, brush->positions);
}
