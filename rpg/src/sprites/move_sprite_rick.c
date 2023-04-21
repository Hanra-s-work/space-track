/*
** EPITECH PROJECT, 2023
** prite of mvt
** File description:
** right left top down
*/

#include "struct.h"
#include "rpg.h"

void rick_right(spt_t *spt)
{
    sfVector2f pos_r = {300, 300};
    char name[100] = "./rpg/assets/sprite/rick_sheet/right.png";

    spt[5].texture = sfTexture_createFromFile(name, NULL);
    spt[5].sprite = sfSprite_create();
    sfSprite_setTexture(spt[5].sprite, spt[5].texture, sfTrue);
    sfSprite_setPosition(spt[5].sprite, pos_r);
}