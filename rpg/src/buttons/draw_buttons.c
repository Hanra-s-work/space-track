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
    for (int i = 5; i <= 7; i++) {
        sfRenderWindow_drawRectangleShape(win[3].win, btn[i].rect, NULL);
    }
}

void draw_button_game(win_t *win, btn_t *btn)
{
    sfRenderWindow_drawRectangleShape(win[2].win, btn[4].rect, NULL);
    sfRenderWindow_drawRectangleShape(win[2].win, btn[8].rect, NULL);
}

void draw_button_intro(win_t *win, btn_t *btn)
{
    for (int i = 9; i <= 9; i++) {
        sfRenderWindow_drawRectangleShape(win[5].win, btn[i].rect, NULL);
    }
}
