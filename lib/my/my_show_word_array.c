/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** cpool
*/

#include "./my.h"

void my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
