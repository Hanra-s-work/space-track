/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** create_win2.c
*/

#include "rpg.h"
#include "struct.h"

void created_intro_window(win_t *win)
{
    sfUint32 sfrc = sfResize | sfClose;
    char const name[30] = "Introduction of SpaceTrack";
    sfVector2i pos_win = { 0, 0 };

    win[5].mode.width = 1920;
    win[5].mode.height = 1080;
    win[5].mode.bitsPerPixel = 32;
    win[5].win = sfRenderWindow_create(win[5].mode, name, sfrc, NULL);
    sfRenderWindow_setPosition(win[5].win, pos_win);
}

void created_help_window(win_t *win)
{
    sfUint32 sfrc = sfResize | sfClose;
    char const name[7] = "Help";
    sfVector2i pos_win = {640, 360};

    win[6].mode.width = 655;
    win[6].mode.height = 507;
    win[6].mode.bitsPerPixel = 32;
    win[6].win = sfRenderWindow_create(win[6].mode, name, sfrc, NULL);
    sfRenderWindow_setPosition(win[6].win, pos_win);
}
