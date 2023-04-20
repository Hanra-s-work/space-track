/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** intro_window.c
*/

#include "struct.h"
#include "rpg.h"
#include "my.h"

static void all_function(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    unit_t *unit = NULL;

    eve_sprite(spt);
    bkg_intro(spt);
    init_intro_text(txt);
    set_intro_rect(btn);
    fill_stat_struct(unit);
    created_intro_window(win);
}

void intro_loop(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt)
{
    int i = 0;
    char *intro_buffer = get_buffer("./rpg/assets/config/context.txt");
    char **tab = my_str_to_word_array(intro_buffer, '\n');

    while (sfRenderWindow_isOpen(win[5].win)) {
        if (i == 16) {
            sfRenderWindow_close(win[5].win);
        }
        sfRenderWindow_clear(win[5].win, sfWhite);
        action_intro_window(win, &i);
        draw_button_intro(win, btn);
        sfRenderWindow_drawRectangleShape(win[5].win, btn[9].rect, NULL);
        if (my_strncmp(tab[i], "Eve", 2) == 0)
            sfRenderWindow_drawSprite(win[5].win, spt[2].sprite, NULL);
        sfRenderWindow_drawSprite(win[5].win, spt[3].sprite, NULL);
        sfRenderWindow_drawText(win[5].win, txt[i].text, NULL);
        sfRenderWindow_display(win[5].win);
    }
    free(intro_buffer);
    free_tab(tab);
}

int intro_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    all_function(win, btn, spt, txt);
    intro_loop(win, spt, btn, txt);
    game_window(win, btn, spt, txt);
    return 0;
}
