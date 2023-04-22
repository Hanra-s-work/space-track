/*
** EPITECH PROJECT, 2023
** prite of mvt
** File description:
** right left top down
*/

#include "struct.h"
#include "rpg.h"
#include <SFML/Graphics/Sprite.h>

void rick_up(spt_t *spt)
{
    sfVector2f pos_r = {925, 440};
    sfVector2f scale = {0.35, 0.35};
    char name[100] = "./rpg/assets/sprite/rick_sheet/top.png";

    spt[0].rect = (sfIntRect){ 0, 0, 270, 340 };
    spt[6].texture = sfTexture_createFromFile(name, NULL);
    spt[6].sprite = sfSprite_create();
    sfSprite_setTexture(spt[6].sprite, spt[6].texture, sfTrue);
    sfSprite_setPosition(spt[6].sprite, pos_r);
    sfSprite_setScale(spt[6].sprite, scale);
}

void rick_left(spt_t *spt)
{
    sfVector2f pos_r = {925, 440};
    sfVector2f scale = {0.35, 0.35};
    char name[100] = "./rpg/assets/sprite/rick_sheet/left.png";

    spt[1].rect = (sfIntRect){ 0, 0, 270, 340 };
    spt[7].texture = sfTexture_createFromFile(name, NULL);
    spt[7].sprite = sfSprite_create();
    sfSprite_setTexture(spt[7].sprite, spt[7].texture, sfTrue);
    sfSprite_setPosition(spt[7].sprite, pos_r);
    sfSprite_setScale(spt[7].sprite, scale);
}

void rick_down(spt_t *spt)
{
    sfVector2f pos_r = {925, 440};
    sfVector2f scale = {0.35, 0.35};
    char name[100] = "./rpg/assets/sprite/rick_sheet/down.png";

    spt[2].rect = (sfIntRect){ 0, 0, 270, 340 };
    spt[8].texture = sfTexture_createFromFile(name, NULL);
    spt[8].sprite = sfSprite_create();
    sfSprite_setTexture(spt[8].sprite, spt[8].texture, sfTrue);
    sfSprite_setPosition(spt[8].sprite, pos_r);
    sfSprite_setScale(spt[8].sprite, scale);
}

void rick_right(spt_t *spt)
{
    sfVector2f pos_r = {925, 440};
    sfVector2f scale = {0.35, 0.35};
    char name[100] = "./rpg/assets/sprite/rick_sheet/right.png";

    spt[3].rect = (sfIntRect){ 0, 0, 270, 340 };
    spt[9].texture = sfTexture_createFromFile(name, NULL);
    spt[9].sprite = sfSprite_create();
    sfSprite_setTexture(spt[9].sprite, spt[9].texture, sfTrue);
    sfSprite_setPosition(spt[9].sprite, pos_r);
    sfSprite_setScale(spt[9].sprite, scale);
}
