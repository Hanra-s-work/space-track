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
void free_struct(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt);

// window
int main_window(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt);
int credit_page(win_t *win, spt_t *spt);
int game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt);
int setting_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt);
int intro_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt);
int help_page(win_t *win, spt_t *spt);

// parsing
char *get_buffer(char *filepath);
void fill_stat_struct(unit_t *unit);
int get_i(char **map);
int get_j(char **map);
char **set_map(char *filepath);
bool set_left(char **map, int i, int *j);
bool set_right(char **map, int i, int *j);
bool set_up(char **map, int *i, int j);
bool set_down(char **map, int *i, int j);
void move_map_left(char **map, spt_t *spt, int i, int j);
void move_map_right(char **map, spt_t *spt, int i, int j);
void move_map_up(char **map, spt_t *spt, int i, int j);
void move_map_down(char **map, spt_t *spt, int i, int j);

// action
void action_main_window(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt);
void action_game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt);
void action_setting_window(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt);
void action_intro_window(win_t *win, int *i);

// sprite
void set_sprite_background(spt_t *spt);
void credit_page_background(spt_t *spt);
void credit_name_sprite(spt_t *spt);
void help_page_background(spt_t *spt);
void eve_sprite(spt_t *spt);
void bkg_intro(spt_t *spt);
void profil_rick(spt_t *spt);
void rick_up(spt_t *spt);
void rick_down(spt_t *spt);
void rick_left(spt_t *spt);
void rick_right(spt_t *spt);
void map_sprite(spt_t *spt);
void guard_right(spt_t *spt);
void set_inventory_background(spt_t *spt);
void set_setting_icon_sprite(spt_t *spt);
void set_setting_continue_sprite(spt_t *spt);
void set_setting_restart_sprite(spt_t *spt);
void set_setting_quit_sprite(spt_t *spt);
void set_setting_background(spt_t *spt);
void help_main_sprite(spt_t *spt);

//animation sprite
void move_top_r(spt_t *spt);
void move_down_r(spt_t *spt);
void move_left_r(spt_t *spt);
void move_right_r(spt_t *spt);
int control_rick(spt_t *spt, char **map);

// create page
void created_main_window(win_t *win, spt_t *spt);
void created_credit_window(win_t *win);
void created_game_window(win_t *win);
void created_setting_window(win_t *win);
void created_intro_window(win_t *win);
void created_help_window(win_t *win);

//init element
void init_setting_button(btn_t *btn, spt_t *spt);
void init_intro_button(btn_t *btn);
void init_media(btn_t *btn);
void init_intro_text(txt_t *txt);

// buttons
void set_button_new_game(btn_t *btn);
void set_button_credit(btn_t *btn);
void set_button_quit(btn_t *btn);
void set_button_setting(btn_t *btn);
void set_button_savegarde(btn_t *btn);
void set_button_setting_quit_save(btn_t *btn);
void set_button_setting_continue(btn_t *btn);
void set_button_setting_restart(btn_t *btn);
void set_button_help(btn_t *btn);
void set_intro_rect(btn_t *btn);
void draw_button(win_t *win, btn_t *btn);
void draw_button_game(win_t *win, btn_t *btn);

void set_button_inventory(btn_t *btn);
int inventory_window(win_t *win, spt_t *spt);
void created_inventory_window(win_t *win);

#endif
