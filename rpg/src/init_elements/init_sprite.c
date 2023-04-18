/*
** EPITECH PROJECT, 2022
** My radar
** File description:
** Untitled-1
*/

#include <stdlib.h>
#include "struct.h"

static sfVector2f init_2f(float x, float y)
{
    sfVector2f a;
    a.x = x;
    a.y = y;
    return a;
}

static sfIntRect init_rect(int x, int y, int c, int r)
{
    sfIntRect a;
    a.left = x;
    a.top = y;
    a.width = c;
    a.height = r;
    return a;
}

spt_t *init_sprite(char *path)
{
    spt_t *spr = malloc(sizeof(spt_t));
    spr->path = path;
    spr->texture = sfTexture_createFromFile(path, NULL);
    spr->sprite = sfSprite_create();
    sfSprite_setTextureRect(spr->sprite, spr->image);
    sfSprite_setTexture(spr->sprite, spr->texture, sfFalse);
    spr->image = init_rect(0, 0, 50, 50);
    spr->positions = init_2f(0, 0);
    return spr;
}
