/*
** EPITECH PROJECT, 2023
** move player
** File description:
** animation of sprite
*/

#include "rpg.h"
#include "struct.h"
#include <SFML/Graphics/Sprite.h>

void move_top_r(spt_t *spt)
{
    spt[0].time = sfClock_getElapsedTime(spt[0].clock);
    spt[0].s = spt[0].time.microseconds / 1000000.0;

    if (spt[0].s > 0.2f) {
        if (spt[0].rect.left > 290) {
            spt[0].rect.left = 0;
        } else {
            spt[0].rect.left += 270;
        }
        sfClock_restart(spt[0].clock);
    }
}

void move_down_r(spt_t *spt)
{
    spt[0].time = sfClock_getElapsedTime(spt[0].clock);
    spt[0].s = spt[0].time.microseconds / 1000000.0;

    if (spt[0].s > 0.2f) {
        if (spt[2].rect.left > 290) {
            spt[2].rect.left = 0;
        } else {
            spt[2].rect.left += 270;
        }
        sfClock_restart(spt[0].clock);
    }
}

void move_left_r(spt_t *spt)
{
    spt[0].time = sfClock_getElapsedTime(spt[0].clock);
    spt[0].s = spt[0].time.microseconds / 1000000.0;

    if (spt[0].s > 0.2f) {
        if (spt[1].rect.left > 290) {
            spt[1].rect.left = 0;
        } else {
            spt[1].rect.left += 270;
        }
        sfClock_restart(spt[0].clock);
    }
}

void move_right_r(spt_t *spt)
{
    spt[0].time = sfClock_getElapsedTime(spt[0].clock);
    spt[0].s = spt[0].time.microseconds / 1000000.0;

    if (spt[0].s > 0.2f) {
        if (spt[3].rect.left > 290) {
            spt[3].rect.left = 0;
        } else {
            spt[3].rect.left += 270;
        }
        sfClock_restart(spt[0].clock);
    }
}
