/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** mul
*/

#ifndef RPG_H_
    #define RPG_H_

    #include <stdbool.h>
    #include <stdlib.h>
    #include "struct.h"

void destroy(win_t *win, spt_t *spt, btn_t *btn);
void free_struct(win_t *win, spt_t *spt, btn_t *btn);

// window
int main_window(win_t *win, spt_t *spt, btn_t *btn);
int credit_page(win_t *win, spt_t *spt);
int game_window(win_t *win, btn_t *btn, spt_t *spt, inventory_t *inv);
int setting_window(win_t *win, btn_t *btn, spt_t *spt, inventory_t *inv);
int intro_window(win_t *win, btn_t *btn, spt_t *spt);

// parsing
char *get_buffer(char *filepath);
void fill_stat_struct(unit_t *unit);
int set_move(char **map);
char **set_map(char *filepath);
bool set_left(char **map, int i);
bool set_right(char **map, int i);
bool set_up(char **map, int i);
bool set_down(char **map, int i);

// action
void action_main_window(win_t *win, spt_t *spt, btn_t *btn);
void action_game_window(win_t *win, btn_t *btn, spt_t *spt, inventory_t *inv);
void action_setting_window(win_t *win, spt_t *spt, btn_t *btn, inventory_t *in);
void action_intro_window(win_t *win, int *i);

// sprite
void set_sprite_background(spt_t *spt);
void credit_page_background(spt_t *spt);
void eve_sprite(spt_t *spt);
void bkg_intro(spt_t *spt);
sfRectangleShape *create_rectangle(btn_t *btn);

// create page
void created_main_window(win_t *win, spt_t *spt);
void created_credit_window(win_t *win);
void created_game_window(win_t *win);
void created_setting_window(win_t *win);
void created_intro_window(win_t *win);

//init element
void init_setting_button(btn_t *btn);
void init_media(btn_t *btn);
void init_intro_text(text_t *txt);

// buttons
void set_button_new_game(btn_t *btn);
void set_button_credit(btn_t *btn);
void set_button_quit(btn_t *btn);
void set_button_setting(btn_t *btn);
void set_button_savegarde(btn_t *btn);
void set_button_setting_quit_save(btn_t *btn);
void set_button_setting_continue(btn_t *btn);
void set_button_setting_restart(btn_t *btn);
void set_intro_rect(btn_t *btn);
void draw_button(win_t *win, btn_t *btn);
void draw_button_intro(win_t *win, btn_t *btn);
void draw_button_game(win_t *win, btn_t *btn);

void set_button_inventory(btn_t *btn);
int inventory_window(win_t *win, inventory_t *inv);
void created_inventory_window(win_t *win, inventory_t *inv);
void set_pos(spt_t *brush, int x, int y);
void set_scale(sfSprite *sp);
int the_inv(inventory_t *list, win_t win);
void disp_inv(inventory_t *inv, win_t win);

#endif
