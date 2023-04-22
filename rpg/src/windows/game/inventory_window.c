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
        if (win[4].event.key.code == sfKeyO)
            sfRenderWindow_close(win[4].win);
    }
}

int inventory_window(btn_t *list, win_t *win, spt_t *spt)
{
    created_inventory_window(list, win);
    set_inventory_background(spt);
    while (sfRenderWindow_isOpen(win[4].win)) {
        action_inventory_window(win);
        sfRenderWindow_clear(win[4].win, sfWhite);
        sfRenderWindow_drawSprite(win[4].win, spt[11].sprite, NULL);
        sfRenderWindow_display(win[4].win);
        the_inv(list, win);
    }
    return 0;
}
