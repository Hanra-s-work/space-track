/*
** EPITECH PROJECT, 2023
** game
** File description:
** page
*/

#include "struct.h"
#include "rpg.h"

static void action_button_setting(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    sfWindow *relateTo = (sfWindow *)win[2].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 1820 && mouse.x <= 1870) &&
        (mouse.y >= 50 && mouse.y <= 100)) {
        if (win[2].event.type == sfEvtMouseButtonPressed)
            setting_window(win, btn, spt, txt);
    }
}

static void action_button_inventory(btn_t *inv, win_t *win, spt_t *spt)
{
    sfWindow *relateTo = (sfWindow *)win[2].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 50 && mouse.x <= 150) &&
        (mouse.y >= 850 && mouse.y <= 900)) {
        if (win[2].event.type == sfEvtMouseButtonPressed)
            inventory_window(inv, win, spt);
    }
    if (win[2].event.type == sfEvtKeyReleased) {
        if (win[2].event.key.code == sfKeyI)
            inventory_window(inv, win, spt);
    }
}

void action_game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    while (sfRenderWindow_pollEvent(win[2].win, &win[2].event)) {
        if (win[2].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[2].win);
        }
        action_button_setting(win, btn, spt, txt);
        action_button_inventory(btn, win, spt);
    }
}
