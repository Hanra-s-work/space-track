/*
** EPITECH PROJECT, 2023
** main
** File description:
** mul
*/

#include "my.h"
#include "struct.h"
#include "rpg.h"

int main(int ac, char **av)
{
    win_t *win = malloc(sizeof(win_t) * 4);
    spt_t *spt = malloc(sizeof(spt_t) * 1);
    btn_t *btn = malloc(sizeof(btn_t) * 5);

    if (ac == 1 && my_strcmp(av[0], "./my_rpg") == 0) {
        if (main_window(win, spt, btn) == 84) {
            free_struct(win, spt, btn);
            return 84;
        }
    }
    free_struct(win, spt, btn);
    return 0;
}
