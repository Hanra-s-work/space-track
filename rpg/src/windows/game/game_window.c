/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"
#include "my.h"

void space_condition(win_t *win, int *i)
{
    if (win[2].event.key.code == sfKeySpace) {
        (*i)++;
    }
}

void window_event(win_t *win, int *i)
{
    while (sfRenderWindow_pollEvent(win[2].win, &win[2].event)) {
        if (win[2].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[2].win);
        }
        if (win[2].event.type == sfEvtKeyReleased) {
            space_condition(win, &i);
        }
    }
}

static void all_function(win_t *win, btn_t *btn, spt_t *spt)
{
    unit_t *unit = NULL;
    eve_sprite(spt);
    bkg_intro(spt);
    create_rectangle(btn);
    fill_stat_struct(unit);
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
}

int game_window(win_t *win, btn_t *btn, spt_t *spt)
{
    all_function(win, btn, spt);
    while (sfRenderWindow_isOpen(win[2].win)) {
        sfRenderWindow_clear(win[2].win, sfWhite);
        action_game_window(win, btn, spt);
        draw_button_game(win, btn);
        sfRenderWindow_drawSprite(win[2].win, spt[2].sprite, NULL);
        sfRenderWindow_drawSprite(win[2].win, spt[3].sprite, NULL);
        sfRenderWindow_drawRectangleShape(win[2].win, btn[9].rect, NULL);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
