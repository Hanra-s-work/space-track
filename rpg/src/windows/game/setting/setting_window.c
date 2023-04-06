/*
** EPITECH PROJECT, 2023
** setting
** File description:
** game
*/

#include "rpg.h"
#include "struct.h"

static void action_setting_window(win_t *win)
{
    while (sfRenderWindow_pollEvent(win[3].win, &win[3].event)) {
        if (win[3].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[3].win);
        }
    }
}

int setting_window(win_t *win)
{
    created_setting_window(win);
    while (sfRenderWindow_isOpen(win[3].win)) {
        action_setting_window(win);
        sfRenderWindow_clear(win[3].win, sfWhite);
        sfRenderWindow_display(win[3].win);
    }
    sfRenderWindow_destroy(win[3].win);
    return 0;
}
