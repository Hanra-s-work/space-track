/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

int game_window(win_t *win, btn_t *btn, spt_t *spt)
{
    created_game_window(win);
    set_button_setting(btn);
    while (sfRenderWindow_isOpen(win[2].win)) {
        action_game_window(win, btn, spt);
        sfRenderWindow_clear(win[2].win, sfWhite);
        sfRenderWindow_drawRectangleShape(win[2].win, btn[4].rect, NULL);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
