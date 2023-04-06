/*
** EPITECH PROJECT, 2023
** game
** File description:
** page
*/

#include "struct.h"
#include "rpg.h"

void action_game_window(win_t *win)
{
    while (sfRenderWindow_pollEvent(win[2].win, &win[2].event)) {
        if (win[2].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[2].win);
        }
    }
}
