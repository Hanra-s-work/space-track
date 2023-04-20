/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** add_end_list.c
*/

#include <stdlib.h>
#include "struct.h"

inventory_t *add_end_list(inventory_t *list, spt_t *spt)
{
    inventory_t *new = malloc(sizeof(inventory_t));
    inventory_t *temp = NULL;
    new->object = spt;
    new->next = NULL;
    new->prev = NULL;

    if (list == NULL) {
        return new;
    } else {
        for (temp = list; temp->next != NULL; temp = temp->next);
        temp->next = new;
        new->prev = temp;
    }
    return list;
}
