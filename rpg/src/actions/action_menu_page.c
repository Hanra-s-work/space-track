/*
** EPITECH PROJECT, 2023
** menu_page
** File description:
** ff
*/

#include "rpg.h"
#include "struct.h"

static void action_button_quit(win_t *win)
{
    sfWindow *relateTo = win[0].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 1370 && mouse.x <= 1870) &&
        (mouse.y >= 810 && mouse.y <= 960)) {
        if (win[0].event.type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(win[0].win);
    }
}

static void action_button_credit(win_t *win, spt_t *spt)
{
    sfWindow *relateTo = win[0].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 1370 && mouse.x <= 1870) &&
        (mouse.y >= 630 && mouse.y <= 780)) {
        if (win[0].event.type == sfEvtMouseButtonPressed)
            credit_page(win, spt);
    }
}

static void action_button_open_game(win_t *win)
{
    sfWindow *relateTo = win[0].win;
    sfVector2i mouse = sfMouse_getPosition(relateTo);

    if ((mouse.x >= 1370 && mouse.x <= 1870) &&
        (mouse.y >= 270 && mouse.y <= 430)) {
        if (win[0].event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(win[0].win);
            game_window(win);
        }
    }
}

void action_main_window(win_t *win, spt_t *spt)
{
    sfVector2u size = { win[0].event.size.height, win[0].event.size.width };
    while (sfRenderWindow_pollEvent(win[0].win, &win[0].event)) {
        if (win[0].event.type == sfEvtClosed) {
            sfRenderWindow_close(win[0].win);
            sfRenderWindow_setSize(win[0].win, size);
        }
    }
    action_button_open_game(win);
    action_button_credit(win, spt);
    action_button_quit(win);
}
