/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** help_window.c
*/

#include "rpg.h"
#include "struct.h"

static void action_help_window(win_t *win)
{
    while (sfRenderWindow_pollEvent(win[6].win, &win[6].event)) {
        if (win[6].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[6].win);
        }
    }
}

int help_page(win_t *win, spt_t *spt)
{
    created_help_window(win);
    help_page_background(spt);
    while (sfRenderWindow_isOpen(win[6].win)) {
        action_help_window(win);
        sfRenderWindow_clear(win[6].win, sfBlack);
        sfRenderWindow_drawSprite(win[6].win, spt[18].sprite, NULL);
        sfRenderWindow_display(win[6].win);
    }
    return 0;
}
