/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** intro_window.c
*/

#include "struct.h"
#include "rpg.h"
#include "my.h"

static void all_function(win_t *win, btn_t *btn, spt_t *spt)
{
    unit_t *unit = NULL;
    eve_sprite(spt);
    bkg_intro(spt);
    set_intro_rect(btn);
    fill_stat_struct(unit);
    created_intro_window(win);
}

int intro_window(win_t *win, btn_t *btn, spt_t *spt)
{
    int i = 0;
    all_function(win, btn, spt);
    while (sfRenderWindow_isOpen(win[5].win)) {
        sfRenderWindow_clear(win[5].win, sfWhite);
        action_intro_window(win, &i);
        draw_button_intro(win, btn);
        sfRenderWindow_drawSprite(win[5].win, spt[2].sprite, NULL);
        sfRenderWindow_drawSprite(win[5].win, spt[3].sprite, NULL);
        sfRenderWindow_drawRectangleShape(win[5].win, btn[9].rect, NULL);
        sfRenderWindow_display(win[5].win);
    }
    return 0;
}
