/*
** EPITECH PROJECT, 2023
** setting
** File description:
** game
*/

#include "rpg.h"
#include "struct.h"

void action_setting_quit_game(win_t *win, spt_t *spt, btn_t *btn)
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

void action_setting_cont_rest(win_t *win, spt_t *spt, btn_t *btn)
{
    sfWindow *relateTo = (sfWindow *)win[3].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 220 && mouse.y <= 370)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
            sfRenderWindow_close(win[2].win);
            game_window(win, btn, spt);
        }
    }
    if ((mouse.x >= 20 && mouse.x <= 300) &&
        (mouse.y >= 40 && mouse.y <= 190)) {
        if (win[3].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[3].win);
        }
    }
}

static void action_setting_window(win_t *win, spt_t *spt, btn_t *btn)
{
    while (sfRenderWindow_pollEvent(win[3].win, &win[3].event)) {
        if (win[3].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[3].win);
        }
        action_setting_quit_game(win, spt, btn);
        action_setting_cont_rest(win, spt, btn);
    }
}

int setting_window(win_t *win, btn_t *btn, spt_t *spt)
{
    created_setting_window(win);
    init_setting_button(btn);
    while (sfRenderWindow_isOpen(win[3].win)) {
        action_setting_window(win, spt, btn);
        sfRenderWindow_clear(win[3].win, sfWhite);
        sfRenderWindow_drawRectangleShape(win[3].win, btn[5].rect, NULL);
        sfRenderWindow_drawRectangleShape(win[3].win, btn[6].rect, NULL);
        sfRenderWindow_drawRectangleShape(win[3].win, btn[7].rect, NULL);
        sfRenderWindow_display(win[3].win);
    }
    return 0;
}
