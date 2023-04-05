/*
** EPITECH PROJECT, 2022
** strcat
** File description:
** strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int l = my_strlen(dest);

    while (src[a] != '\0') {
        dest[l + a] = src[a];
        a = a + 1;
    }
    dest[l + a] = '\0';
    return dest;
}
