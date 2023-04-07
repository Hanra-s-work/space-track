/*
** EPITECH PROJECT, 2023
** main_window
** File description:
** rpg
*/

#include "struct.h"
#include "rpg.h"

void draw_buttons_and_sprite(btn_t *btn, win_t *win, spt_t *spt)
{
    sfRenderWindow_drawSprite(win[0].win, spt[0].sprite, NULL);
    draw_button(win, btn);
}

int main_window(win_t *win, spt_t *spt, btn_t *btn)
{
    created_main_window(win, spt);
    init_media(btn);
    while (sfRenderWindow_isOpen(win[0].win)) {
        action_main_window(win, spt, btn);
        sfRenderWindow_clear(win[0].win, sfWhite);
        draw_buttons_and_sprite(btn, win, spt);
        sfRenderWindow_display(win[0].win);
    }
    return 0;
}
