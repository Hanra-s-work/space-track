/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** strlen
*/

#include "./my.h"

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        n = n + 1;
    }
    return n;
}
