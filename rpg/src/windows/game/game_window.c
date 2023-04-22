/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

void init_game(win_t *win, btn_t *btn, spt_t *spt)
{
    spt[0].clock = sfClock_create();
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
    map_sprite(spt);
    rick_right(spt);
}

int game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    unit_t *unit = NULL;
    char **map = set_map("./rpg/assets/maps/earth.txt");
    int i = get_i(map);
    int j = get_j(map);

    init_game(win, btn, spt);
    fill_stat_struct(unit);
    while (sfRenderWindow_isOpen(win[2].win)) {
        move_right_r(spt);
        sfRenderWindow_clear(win[2].win, sfColor_fromRGB(85, 85, 85));
        action_game_window(win, btn, spt, txt);
        sfRenderWindow_drawSprite(win[2].win, spt[6].sprite, NULL);
        sfRenderWindow_drawSprite(win[2].win, spt[5].sprite, NULL);
        sfSprite_setTextureRect(spt[5].sprite, spt[0].rect);
        sfSprite_setPosition(spt[5].sprite, (sfVector2f){925, 440});
        draw_button_game(win, btn);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
