/*
** EPITECH PROJECT, 2023
** create
** File description:
** win
*/

#include "rpg.h"
#include "struct.h"

void created_main_window(win_t *win, spt_t *spt)
{
    sfUint32 sfrc = sfResize | sfClose;
    char const name[7] = "My_RPG";

    win[0].mode.width = 1920;
    win[0].mode.height = 1080;
    win[0].mode.bitsPerPixel = 32;
    win[0].win = sfRenderWindow_create(win[0].mode, name, sfrc, NULL);
    set_sprite_background(spt);
}

void created_credit_window(win_t *win, spt_t *spt)
{
    sfUint32 sfrc = sfClose;
    char const name[7] = "Credit";
    sfVector2i pos_win = {640, 360};

    win[1].mode.width = 640;
    win[1].mode.height = 500;
    win[1].mode.bitsPerPixel = 32;
    win[1].win = sfRenderWindow_create(win[1].mode, name, sfrc, NULL);
    sfRenderWindow_setPosition(win[1].win, pos_win);
}
