/*
** EPITECH PROJECT, 2022
** strdup
** File description:
** strdup
*/

#include <malloc.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *dest = NULL;
    int n = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[n] != '\0') {
        dest[n] = src[n];
        n = n + 1;
    }
    dest[n] = '\0';
    return dest;
}
