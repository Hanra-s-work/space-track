/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** mul
*/

#ifndef RPG_H_
    #define RPG_H_

    #include "struct.h"
    #include "intro.h"

void destroy(win_t *win, spt_t *spt, btn_t *btn);
void free_struct(win_t *win, spt_t *spt, btn_t *btn);

// window
int main_window(win_t *win, spt_t *spt, btn_t *btn);
int credit_page(win_t *win, spt_t *spt);
int game_window(win_t *win, btn_t *btn, spt_t *spt);
int setting_window(win_t *win, btn_t *btn, spt_t *spt);

// parsing
char *get_buffer(char *filepath);
void fill_stat_struct(unit_t *unit);
int set_move(char **map);
char **set_map(char *filepath);
bool set_left(char **map, int i);
bool set_right(char **map, int i)
bool set_up(char **map, int i)
bool set_down(char **map, int i)

// action
void action_main_window(win_t *win, spt_t *spt, btn_t *btn);
void action_game_window(win_t *win, btn_t *btn, spt_t *spt);

// sprite
void set_sprite_background(spt_t *spt);
void credit_page_background(spt_t *spt);
void eve_sprite(spt_t *spt);
void bkg_intro(spt_t *spt);

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

void set_button_inventory(btn_t *btn);
int inventory_window(win_t *win);
void draw_button_game(win_t *win, btn_t *btn);
void created_inventory_window(win_t *win);

#endif
