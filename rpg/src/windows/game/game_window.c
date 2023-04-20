/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

int game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    unit_t *unit = NULL;
    char **map = set_map("./rpg/assets/maps/earth.txt");
    int i = get_i(map);
    int j = get_j(map);

    fill_stat_struct(unit);
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
    while (sfRenderWindow_isOpen(win[2].win)) {
        sfRenderWindow_clear(win[2].win, sfWhite);
        action_game_window(win, btn, spt, txt);
        draw_button_game(win, btn);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
