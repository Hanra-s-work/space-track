/*
** EPITECH PROJECT, 2023
** move player
** File description:
** animation of sprite
*/

#include "rpg.h"
#include "struct.h"

void move_right_r(spt_t *spt)
{
    spt->clk->time = sfClock_getElapsedTime(spt->clk->clock);
    spt->clk->s = spt->clk->time.microseconds / 1000000.0;

    if (spt->clk->s > 0.5) {
        if (spt->clk->rect.left > 290) {
                spt->clk->rect.left = 0;
        } else {
            spt->clk->rect.left += 280;
            sfClock_restart(spt->clk->clock);
        }
    }
}