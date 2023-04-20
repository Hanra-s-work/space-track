/*
** EPITECH PROJECT, 2023
** intro action
** File description:
** space track
*/

#include "struct.h"
#include "rpg.h"

void space_condition(win_t *win, int *i)
{
    if (win[5].event.key.code == sfKeySpace) {
        (*i)++;
    }
}

void action_intro_window(win_t *win, int *i)
{
    while (sfRenderWindow_pollEvent(win[5].win, &win[5].event)) {
        if (win[5].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[5].win);
        }
        if (win[5].event.type == sfEvtKeyReleased) {
            space_condition(win, i);
        }
    }
}
