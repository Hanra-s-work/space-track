/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** the_inv.c
*/

#include <stddef.h>
#include "rpg.h"

int the_inv(inventory_t *list, win_t win)
{
    inventory_t *tmp = malloc(sizeof(inventory_t));
    if (list == NULL) {
        return 84;
    }
    for (tmp = list; tmp->next != NULL; tmp = tmp->next) {
        disp_inv(list, win);
    }
    return 0;
}
