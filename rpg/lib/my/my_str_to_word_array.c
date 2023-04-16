/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** cpool
*/

#include "my.h"

static int count_string_character(char *str, char sep)
{
    int n = 0;
    int character_number = 0;

    while (str[n] != '\0') {
        if (str[n] != sep)
            character_number += 1;
        else
            return character_number;
        n = n + 1;
    }
    return character_number;
}

static int count_string_number(char *str, char sep)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep)
        count++;
    }
    count++;
    return count;
}

static int calc_n(int n, int size, char *str, char sep)
{
    int new_n = size + n;

    while (str[new_n] == sep || str[new_n] == '\0') {
        if (str[new_n] == '\0') {
            return new_n;
        }
        new_n = new_n + 1;
    }
    return new_n;
}

char **my_str_to_word_array(char *str, char sep)
{
    int n = 0, line = 0, size = 0;
    char **tab;
    char *copy;
    int count = count_string_number(str, sep);

    tab = malloc(sizeof(char *) * (count + 1));
    while (str[n] != '\0' && line < count) {
        size = count_string_character(str + n, sep);
        copy = malloc(sizeof(char) * (size + 1));
        my_strncpy(copy, str + n, size);
        copy[size] = '\0';
        tab[line] = copy;
        line++;
        n = calc_n(n, size, str, sep);
    }
    tab[line] = NULL;
    return tab;
}
