/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** putstr
*/

#include "./my.h"

int my_putstr(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n = n + 1;
    }
    return 0;
}
