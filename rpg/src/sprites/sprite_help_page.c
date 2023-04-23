/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** sprite_help_page.c
*/

#include "rpg.h"
#include "struct.h"

void help_page_background(spt_t *spt)
{
    char name[100] = "rpg/assets/sprite/help.png";
    sfVector2f pos = (sfVector2f){ 0, 0 };

    spt[18].texture = sfTexture_createFromFile(name, NULL);
    spt[18].sprite = sfSprite_create();
    sfSprite_setTexture(spt[18].sprite, spt[18].texture, sfTrue);
    sfSprite_setPosition(spt[18].sprite, pos);
}

void help_main_sprite(spt_t *spt)
{
    char name[100] = "rpg/assets/sprite/?.png";
    sfVector2f pos = {1000, 810};
    spt[19].texture = sfTexture_createFromFile(name, NULL);
    spt[19].sprite = sfSprite_create();
    sfSprite_setTexture(spt[19].sprite, spt[19].texture, sfTrue);
    sfSprite_setPosition(spt[19].sprite, pos);
}
