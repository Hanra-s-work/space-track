/*
** EPITECH PROJECT, 2022
** Bootstrap BSQ
** File description:
** Untitled-1
*/

#include <stdlib.h>
#include "./my.h"

char *my_strdup(char const* src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));
    str = my_strncpy(str, src, my_strlen(src));
    return str;
}
