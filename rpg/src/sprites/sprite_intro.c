/*
** EPITECH PROJECT, 2023
** intro sprite
** File description:
** eve and background
*/

#include "struct.h"
#include "rpg.h"

void eve_sprite(spt_t *spt)
{
    sfVector2f pos_eve = {50, 835};
    sfVector2f scale = {0.3f, 0.3};
    char name[100] = "./rpg/assets/sprite/eve.png";

    spt[2].texture = sfTexture_createFromFile(name, NULL);
    spt[2].sprite = sfSprite_create();
    sfSprite_setTexture(spt[2].sprite, spt[2].texture, sfTrue);
    sfSprite_setScale(spt[2].sprite, scale);
    sfSprite_setPosition(spt[2].sprite, pos_eve);
}

void bkg_intro(spt_t *spt)
{
    sfVector2f pos_bkg = {5, 5};
    sfVector2f scale = {0.7f, 0.48f};
    char name[100] = "./rpg/assets/sprite/intro_back.jpg";

    spt[3].texture = sfTexture_createFromFile(name, NULL);
    spt[3].sprite = sfSprite_create();
    sfSprite_setTexture(spt[3].sprite, spt[3].texture, sfTrue);
    sfSprite_setScale(spt[3].sprite, scale);
    sfSprite_setPosition(spt[3].sprite, pos_bkg);
}
