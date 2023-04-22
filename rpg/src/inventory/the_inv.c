/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** the_inv.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "struct.h"

spt_t *init_srite(char *path)
{
    spt_t *sp = malloc(sizeof(spt_t));
    sp->path = path;
    sp->texture = sfTexture_createFromFile(path, NULL);
    if (!sp->texture) {
        return sp;
    }
    sp->sprite = sfSprite_create();
    sfSprite_setTextureRect(sp->sprite, sp->image);
    sfSprite_setTexture(sp->sprite, sp->texture, sfFalse);
    return sp;
}

int the_inv(btn_t *list, win_t *win)
{
    btn_t *tmp = malloc(sizeof(btn_t));
    if (list == NULL) {
        return 84;
    }
    for (tmp = list; tmp->next != NULL; tmp = tmp->next) {
        disp_inv(list, win);
    }
    return 0;
}
