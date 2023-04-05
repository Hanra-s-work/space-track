/*
** EPITECH PROJECT, 2023
** draw_button
** File description:
** dd
*/

#include "struct.h"

void draw_button(win_t *win, btn_t *btn)
{
    for (int i = 0; i <= 3; i += 1) {
        sfRenderWindow_drawRectangleShape(win[0].win, btn[i].rect, NULL);
    }
}
