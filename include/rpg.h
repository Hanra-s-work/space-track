/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** mul
*/

#ifndef RPG_H_
    #define RPG_H_

    #include "struct.h"

void destroy(win_t *win, spt_t *spt, btn_t *btn);
void free_struct(win_t *win, spt_t *spt, btn_t *btn);

// menu page
int main_window(win_t *win, spt_t *spt, btn_t *btn);
void action_main_window(win_t *win);
void set_sprite_background(spt_t *spt);
void set_buton_play(btn_t *btn);
void created_main_window(win_t *win, spt_t *spt);

//init element
void init_media(btn_t *btn);

// buttons
void draw_button(win_t *win, btn_t *btn);

#endif
