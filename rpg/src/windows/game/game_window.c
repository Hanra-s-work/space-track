/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

int game_window(win_t *win, btn_t *btn)
{
    set_button_setting(btn);
    created_game_window(win);
    while (sfRenderWindow_isOpen(win[2].win)) {
        action_game_window(win);
        sfRenderWindow_clear(win[2].win, sfWhite);
        sfRenderWindow_drawRectangleShape(win[2].win, btn[4].rect, NULL);
        sfRenderWindow_display(win[2].win);
    }
    sfRenderWindow_destroy(win[2].win);
    sfRectangleShape_destroy(btn[4].rect);
    return 0;
}
