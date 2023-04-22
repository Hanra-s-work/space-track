/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** add_end_list.c
*/

#include <stdlib.h>
#include "struct.h"

btn_t *add_end_list(btn_t *list, spt_t *spt)
{
    btn_t *new = malloc(sizeof(btn_t));
    btn_t *temp = NULL;
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
