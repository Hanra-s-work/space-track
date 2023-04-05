/*
** EPITECH PROJECT, 2023
** init button
** File description:
** dd
*/

#include "struct.h"
#include "rpg.h"

static void init_button(btn_t *btn)
{
    set_button_credit(btn);
    set_button_new_game(btn);
    set_button_quit(btn);
    set_button_savegarde(btn);
}

void init_media(btn_t *btn)
{
    init_button(btn);
}
