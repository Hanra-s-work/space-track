/*
** EPITECH PROJECT, 2023
** free_tab
** File description:
** mul
*/

#include <stddef.h>
#include <malloc.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}
