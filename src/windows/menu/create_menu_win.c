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
