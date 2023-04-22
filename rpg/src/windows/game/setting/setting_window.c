/*
** EPITECH PROJECT, 2023
** setting
** File description:
** game
*/

#include "rpg.h"

int setting_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    created_setting_window(win);
    init_setting_button(btn);
    while (sfRenderWindow_isOpen(win[3].win)) {
        action_setting_window(win, spt, btn, txt);
        sfRenderWindow_clear(win[3].win, sfWhite);
        sfRenderWindow_drawRectangleShape(win[3].win, btn[5].rect, NULL);
        sfRenderWindow_drawRectangleShape(win[3].win, btn[6].rect, NULL);
        sfRenderWindow_drawRectangleShape(win[3].win, btn[7].rect, NULL);
        sfRenderWindow_display(win[3].win);
    }
    return 0;
}
