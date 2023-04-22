/*
** EPITECH PROJECT, 2023
** move player
** File description:
** animation of sprite
*/

#include "rpg.h"
#include "struct.h"
#include <SFML/Graphics/Sprite.h>

void move_right_r(spt_t *spt)
{
    spt[0].time = sfClock_getElapsedTime(spt[0].clock);
    spt[0].s = spt[0].time.microseconds / 1000000.0;

    if (spt[0].s > 0.4f) {
        if (spt[0].rect.left > 290) {
            spt[0].rect.left = 0;
        } else {
            spt[0].rect.left += 280;
        }
        sfClock_restart(spt[0].clock);
    }
}
