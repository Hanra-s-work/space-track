/*
** EPITECH PROJECT, 2023
** setting_page_action
** File description:
** space track
*/

#include "rpg.h"
#include "struct.h"

static void action_setting_quit_game(win_t *win, spt_t *spt, btn_t *btn)
{
    sfWindow *relateTo = (sfWindow *)win[3].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 400 && mouse.y <= 550)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
            sfRenderWindow_close(win[2].win);
            main_window(win, spt, btn);
        }
    }
}

static void action_setting_cont_rest(win_t *win, spt_t *spt, btn_t *btn,
inventory_t *inv)
{
    sfWindow *relateTo = (sfWindow *)win[3].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 220 && mouse.y <= 370)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
            sfRenderWindow_close(win[2].win);
            game_window(win, btn, spt, inv);
        }
    }
    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 40 && mouse.y <= 190)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
        }
    }
}

void action_setting_window(win_t *win, spt_t *spt, btn_t *btn, inventory_t *in)
{
    while (sfRenderWindow_pollEvent(win[3].win, &win[3].event)) {
        if (win[3].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[3].win);
        }
        action_setting_quit_game(win, spt, btn);
        action_setting_cont_rest(win, spt, btn, in);
    }
}
