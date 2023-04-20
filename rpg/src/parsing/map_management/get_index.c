/*
** EPITECH PROJECT, 2023
** get_index
** File description:
** mul
*/

#include <stddef.h>

int get_i(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P')
                return i;
        }
    }
    return 0;
}

int get_j(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P')
                return j;
        }
    }
    return 0;
}