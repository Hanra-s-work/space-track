/*
** EPITECH PROJECT, 2023
** strncmp
** File description:
** cpool
*/

#include "./my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    char s1_sub[n + 1];
    char s2_sub[n + 1];

    my_strncpy(s1_sub, s1, n);
    my_strncpy(s2_sub, s2, n);
    s1_sub[n] = '\0';
    s2_sub[n] = '\0';
    return my_strcmp(s1_sub, s2_sub);
}
