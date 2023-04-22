/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** disp_inv.c
*/

#include "struct.h"
#include "rpg.h"

void disp_inv(spt_t *sprite, btn_t *inv, win_t *win)
{
    set_pos(sprite, inv->x, inv->y);
    set_scale(sprite->sprite);
    sfRenderWindow_drawSprite(win->win, inv->object->sprite, NULL);
}
