/*
** EPITECH PROJECT, 2023
** map_game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

void map_sprite(spt_t *spt)
{
    sfVector2f pos_map = { 370, -2090 };
    sfVector2f scale = { 4, 4 };
    char name[100] = "./rpg/assets/maps/maps/earth_map.png";

    spt[5].texture = sfTexture_createFromFile(name, NULL);
    spt[5].sprite = sfSprite_create();

    sfSprite_setTexture(spt[5].sprite, spt[5].texture, sfTrue);
    sfSprite_setScale(spt[5].sprite, scale);
    sfSprite_setPosition(spt[5].sprite, pos_map);
}
