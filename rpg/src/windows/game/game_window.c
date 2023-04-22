/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "rpg.h"
#include "constant.h"

static void init_game(win_t *win, btn_t *btn, spt_t *spt)
{
    spt[0].clock = sfClock_create();
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
    map_sprite(spt);
    rick_up(spt);
    rick_left(spt);
    rick_right(spt);
    rick_down(spt);
}

static void draw_sprite(int control, win_t *win, spt_t *spt)
{
    if (control == left) {
        sfRenderWindow_drawSprite(win[2].win, spt[7].sprite, NULL);
        sfSprite_setTextureRect(spt[7].sprite, spt[1].rect);
        sfSprite_setPosition(spt[7].sprite, (sfVector2f){925, 440});
    }
    if (control == right) {
        sfRenderWindow_drawSprite(win[2].win, spt[9].sprite, NULL);
        sfSprite_setTextureRect(spt[9].sprite, spt[3].rect);
        sfSprite_setPosition(spt[9].sprite, (sfVector2f){925, 440});
    }
    if (control == up) {
        sfRenderWindow_drawSprite(win[2].win, spt[6].sprite, NULL);
        sfSprite_setTextureRect(spt[6].sprite, spt[0].rect);
        sfSprite_setPosition(spt[6].sprite, (sfVector2f){925, 440});
    }
    if (control == down) {
        sfRenderWindow_drawSprite(win[2].win, spt[8].sprite, NULL);
        sfSprite_setTextureRect(spt[8].sprite, spt[2].rect);
        sfSprite_setPosition(spt[8].sprite, (sfVector2f){925, 440});
    }
}

static void draw_all(win_t *win, btn_t *btn, spt_t *spt, char **map)
{
    static int control = 0;

    control = control_rick(spt, map);
    sfRenderWindow_drawSprite(win[2].win, spt[5].sprite, NULL);
    if (control == 0) {
        sfRenderWindow_drawSprite(win[2].win, spt[6].sprite, NULL);
        sfSprite_setTextureRect(spt[6].sprite, spt[0].rect);
        sfSprite_setPosition(spt[6].sprite, (sfVector2f){925, 440});
    }
    draw_sprite(control, win, spt);
    draw_button_game(win, btn);
}

int game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    unit_t *unit = NULL;
    char **map = set_map("./rpg/assets/maps/earth.txt");

    init_game(win, btn, spt);
    fill_stat_struct(unit);
    while (sfRenderWindow_isOpen(win[2].win)) {
        sfRenderWindow_clear(win[2].win, sfColor_fromRGB(108, 108, 108));
        action_game_window(win, btn, spt, txt);
        draw_all(win, btn, spt, map);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
