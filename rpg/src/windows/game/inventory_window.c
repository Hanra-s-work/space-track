/*
** EPITECH PROJECT, 2423
** inventory
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

static void action_inventory_window(win_t *win)
{
    while (sfRenderWindow_pollEvent(win[4].win, &win[4].event)) {
        if (win[4].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[4].win);
        }
    }
}

int inventory_window(win_t *win)
{
    created_inventory_window(win);
    while (sfRenderWindow_isOpen(win[4].win)) {
        action_inventory_window(win);
        sfRenderWindow_clear(win[4].win, sfWhite);
        sfRenderWindow_display(win[4].win);
    }
    return 0;
}
