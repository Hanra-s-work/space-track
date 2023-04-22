/*
** EPITECH PROJECT, 2023
** intro action
** File description:
** space track
*/

#include "struct.h"
#include "rpg.h"

static void space_condition(win_t *win, int *i)
{
    if (win[5].event.key.code == sfKeySpace) {
        (*i)++;
    }
}

static void choice(win_t *win, int *i)
{
    if (win[5].event.key.code == sfKeyN) {
        *i = 15;
    }
    if (win[5].event.key.code == sfKeyY) {
        (*i)++;
    }
}

void action_intro_window(win_t *win, int *i)
{
    while (sfRenderWindow_pollEvent(win[5].win, &win[5].event)) {
        if (*i != 1 && win[5].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[5].win);
        }
        if (*i != 1 && win[5].event.type == sfEvtKeyReleased) {
            space_condition(win, i);
        }
        if (*i == 1 && win[5].event.type == sfEvtKeyReleased) {
            choice(win, i);
        }
    }
}
