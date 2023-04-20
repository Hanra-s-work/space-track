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
    sfUint32 sfrc = sfClose;
    char const name[10] = "Introduction of Space Track";
    sfVector2i pos_win = {0, 546};

    win[5].mode.width = 1920;
    win[5].mode.height = 500;
    win[5].mode.bitsPerPixel = 32;
    win[5].win = sfRenderWindow_create(win[5].mode, name, sfrc, NULL);
    sfRenderWindow_setPosition(win[5].win, pos_win);
}
