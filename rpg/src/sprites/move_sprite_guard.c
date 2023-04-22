/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** move_sprite_guard.c
*/

#include "rpg.h"
#include "struct.h"

void guard_right(spt_t *spt)
{
    sfVector2f pos_g = {1500, 600};
    //sfVector2f scale = {0.35, 0.35};
    char name[100] = "./rpg/assets/sprite/guard_sheet/right.png";

    //spt[0].rect = (sfIntRect){ 0, 0, 270, 340 };
    spt[10].texture = sfTexture_createFromFile(name, NULL);
    spt[10].sprite = sfSprite_create();
    sfSprite_setTexture(spt[10].sprite, spt[10].texture, sfTrue);
    sfSprite_setPosition(spt[10].sprite, pos_g);
    //sfSprite_setScale(spt[9].sprite, scale);
}