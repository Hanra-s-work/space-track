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
    unit_t *unit = NULL;
    fill_stat_struct(unit);
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
    while (sfRenderWindow_isOpen(win[2].win)) {
        sfRenderWindow_clear(win[2].win, sfWhite);
        action_game_window(win, btn, spt);
        draw_button_game(win, btn);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
