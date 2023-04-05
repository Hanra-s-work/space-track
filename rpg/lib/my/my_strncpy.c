/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** strncpy
*/

#include "./my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (a < n) {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return dest;
}
