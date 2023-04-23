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

int main_window(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt)
{
    created_main_window(win, spt);
    help_main_sprite(spt);
    init_media(btn);
    while (sfRenderWindow_isOpen(win[0].win)) {
        action_main_window(win, spt, btn, txt);
        sfRenderWindow_clear(win[0].win, sfWhite);
        draw_buttons_and_sprite(btn, win, spt);
        sfRenderWindow_drawRectangleShape(win[0].win, btn[10].rect, NULL);
        sfRenderWindow_drawSprite(win[0].win, spt[19].sprite, NULL);
        sfRenderWindow_display(win[0].win);
    }
    return 0;
}
