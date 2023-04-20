/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** disp_inv.c
*/

#include "struct.h"
#include "rpg.h"

void disp_inv(inventory_t *inv, win_t win)
{
    set_pos(inv->object->sprite, inv->x, inv->y);
    set_scale(inv->object->sprite);
    sfRenderWindow_drawSprite(win.win, inv->object->sprite, NULL);
}
