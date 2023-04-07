/*
** EPITECH PROJECT, 2023
** credit menu page
** File description:
** rpg
*/

#include "struct.h"
#include "rpg.h"

static void action_credit_window(win_t *win)
{
    while (sfRenderWindow_pollEvent(win[1].win, &win[1].event)) {
        if (win[1].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[1].win);
        }
    }
}

int credit_page(win_t *win, spt_t *spt)
{
    created_credit_window(win, spt);
    while (sfRenderWindow_isOpen(win[1].win)) {
        action_credit_window(win);
        sfRenderWindow_clear(win[1].win, sfBlack);
        sfRenderWindow_display(win[1].win);
    }
    return 0;
}
