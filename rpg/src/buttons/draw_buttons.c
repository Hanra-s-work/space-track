/*
** EPITECH PROJECT, 2023
** draw_button
** File description:
** dd
*/

#include "struct.h"

void draw_button(win_t *win, btn_t *btn)
{
    for (int i = 0; i <= 3; i++) {
        sfRenderWindow_drawRectangleShape(win[0].win, btn[i].rect, NULL);
    }
}

void draw_button_setting(win_t *win, btn_t *btn)
{
    for (int i = 5; i <= 5; i++) {
        sfRenderWindow_drawRectangleShape(win[3].win, btn[i].rect, NULL);
    }
}
