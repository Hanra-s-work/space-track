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
    sfVector2f pos_eve = { 30, 835 };
    sfVector2f scale = { 0.3f, 0.3f };
    char name[100] = "./rpg/assets/sprite/eve.png";

    spt[2].texture = sfTexture_createFromFile(name, NULL);
    spt[2].sprite = sfSprite_create();
    sfSprite_setTexture(spt[2].sprite, spt[2].texture, sfTrue);
    sfSprite_setScale(spt[2].sprite, scale);
    sfSprite_setPosition(spt[2].sprite, pos_eve);
}

void bkg_intro(spt_t *spt)
{
    sfVector2f pos_bkg = { 0, 0 };
    sfVector2f scale = { 0.7f, 0.48f };
    char name[100] = "./rpg/assets/sprite/intro_back.jpg";

    spt[3].texture = sfTexture_createFromFile(name, NULL);
    spt[3].sprite = sfSprite_create();
    sfSprite_setTexture(spt[3].sprite, spt[3].texture, sfTrue);
    sfSprite_setScale(spt[3].sprite, scale);
    sfSprite_setPosition(spt[3].sprite, pos_bkg);
}

void profil_rick(spt_t *spt)
{
    sfVector2f pos_rick = { 30, 835 };
    sfVector2f scale = { 0.3f, 0.3f };

    char name[100] = "./rpg/assets/sprite/profil_rick.png";

    spt[4].texture = sfTexture_createFromFile(name, NULL);
    spt[4].sprite = sfSprite_create();
    sfSprite_setTexture(spt[4].sprite, spt[4].texture, sfTrue);
    sfSprite_setScale(spt[4].sprite, scale);
    sfSprite_setPosition(spt[4].sprite, pos_rick);
}
