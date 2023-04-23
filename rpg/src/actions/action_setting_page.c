/*
** EPITECH PROJECT, 2023
** setting_page_action
** File description:
** space track
*/

#include "rpg.h"
#include "struct.h"

void action_setting_quit_game(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt)
{
    sfWindow *relateTo = (sfWindow *)win[3].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 400 && mouse.y <= 550)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
            sfRenderWindow_close(win[2].win);
            sfMusic_destroy(win[0].music);
            main_window(win, spt, btn, txt);
        }
    }
}

void action_setting_cont_rest(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt)
{
    sfWindow *relateTo = (sfWindow *)win[3].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 220 && mouse.y <= 370)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
            sfRenderWindow_close(win[2].win);
            sfMusic_destroy(win[0].music);
            game_window(win, btn, spt, txt);
        }
    }
    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 40 && mouse.y <= 190)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
            sfMusic_play(win[0].music);
        }
    }
}

void action_setting_window(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt)
{
    while (sfRenderWindow_pollEvent(win[3].win, &win[3].event)) {
        if (win[3].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[3].win);
        }
        sfMusic_pause(win[0].music);
        action_setting_quit_game(win, spt, btn, txt);
        action_setting_cont_rest(win, spt, btn, txt);
    }
}
