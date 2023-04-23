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
    sfVector2f pos = (sfVector2f){ 0, 0 };

    spt[1].texture = sfTexture_createFromFile(name, NULL);
    spt[1].sprite = sfSprite_create();
    sfSprite_setTexture(spt[1].sprite, spt[1].texture, sfTrue);
    sfSprite_setPosition(spt[1].sprite, pos);
}

void credit_name_sprite(spt_t *spt)
{
    sfVector2f scale = (sfVector2f){0.04, 0.03};
    sfVector2f pos = (sfVector2f){ 280, 200 };
    char name[100] = "rpg/assets/sprite/thomas_gris.png";

    spt[17].texture = sfTexture_createFromFile(name, NULL);
    spt[17].sprite = sfSprite_create();
    sfSprite_setTexture(spt[17].sprite, spt[17].texture, sfTrue);
    sfSprite_setPosition(spt[17].sprite, pos);
    sfSprite_setScale(spt[17].sprite, scale);
}
