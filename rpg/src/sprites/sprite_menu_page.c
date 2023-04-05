/*
** EPITECH PROJECT, 2023
** sprite
** File description:
** ff
*/

#include "rpg.h"
#include "struct.h"

void set_sprite_background(spt_t *spt)
{
    spt[0].texture = sfTexture_createFromFile("assets/ff.jpg", NULL);
    spt[0].sprite = sfSprite_create();
    sfSprite_setTexture(spt[0].sprite, spt[0].texture, sfTrue);
}
