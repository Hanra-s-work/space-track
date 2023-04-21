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
    //spt->clk->rect.top = 0;
    //spt->clk->rect.left = 0;
    //spt->clk->rect.width = 280;
    //spt->clk->rect.height = 530;

    //rick_right(spt);
    //rick_left(spt);
    fill_stat_struct(unit);
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
    map_sprite(spt);
    while (sfRenderWindow_isOpen(win[2].win)) {
        //move_right_r(spt);
        sfRenderWindow_clear(win[2].win, sfColor_fromRGB-);
        action_game_window(win, btn, spt, txt);
        draw_button_game(win, btn);
        sfRenderWindow_drawSprite(win[2].win, spt[6].sprite, NULL);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
