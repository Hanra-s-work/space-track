/*
** EPITECH PROJECT, 2023
** menu_page
** File description:
** ff
*/

#include "rpg.h"
#include "struct.h"

void action_main_window(win_t *win)
{
    sfVector2u size = { win[0].event.size.height, win[0].event.size.width };
    while (sfRenderWindow_pollEvent(win[0].win, &win[0].event)) {
        if (win[0].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[0].win);
            sfRenderWindow_setSize(win[0].win, size);
        }
    }
}
