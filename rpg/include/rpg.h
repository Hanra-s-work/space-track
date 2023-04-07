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

// window
int main_window(win_t *win, spt_t *spt, btn_t *btn);
int credit_page(win_t *win, spt_t *spt);
int game_window(win_t *win, btn_t *btn, spt_t *spt);
int setting_window(win_t *win, btn_t *btn, spt_t *spt);

// action
void action_main_window(win_t *win, spt_t *spt, btn_t *btn);
void action_game_window(win_t *win, btn_t *btn, spt_t *spt);

// sprite
void set_sprite_background(spt_t *spt);

// create page
void created_main_window(win_t *win, spt_t *spt);
void created_credit_window(win_t *win, spt_t *spt);
void created_game_window(win_t *win);
void created_setting_window(win_t *win);

//init element
void init_setting_button(btn_t *btn);
void init_media(btn_t *btn);

// buttons
void set_button_new_game(btn_t *btn);
void set_button_credit(btn_t *btn);
void set_button_quit(btn_t *btn);
void set_button_setting(btn_t *btn);
void set_button_savegarde(btn_t *btn);
void set_button_setting_quit_save(btn_t *btn);
void set_button_setting_continue(btn_t *btn);
void set_button_setting_restart(btn_t *btn);
void draw_button(win_t *win, btn_t *btn);

#endif
