/*
** EPITECH PROJECT, 2023
** sprite
** File description:
** ff
*/

#include "rpg.h"
#include "struct.h"

void set_inventory_background(spt_t *spt)
{
    char name[100] = "./rpg/assets/sprite/inv.png";

    spt[11].texture = sfTexture_createFromFile(name, NULL);
    spt[11].sprite = sfSprite_create();
    sfSprite_setTexture(spt[11].sprite, spt[11].texture, sfTrue);
}
