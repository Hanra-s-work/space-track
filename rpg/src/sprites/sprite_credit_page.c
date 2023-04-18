/*
** EPITECH PROJECT, 2023
** sprite_credit_page
** File description:
** mul
*/

#include "rpg.h"
#include "struct.h"

void credit_page_background(spt_t *spt)
{
    char name[100] = "rpg/assets/sprite/credit_back.jpg";

    spt[1].texture = sfTexture_createFromFile(name, NULL);
    spt[1].sprite = sfSprite_create();
    sfSprite_setTexture(spt[1].sprite, spt[1].texture, sfTrue);
}
