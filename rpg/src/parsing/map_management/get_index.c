/*
** EPITECH PROJECT, 2023
** get_index
** File description:
** mul
*/

#include <stddef.h>

static int move_p_i(char **map, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'P')
            return i;
    }
    return 0;
}

static int move_p_j(char **map, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'P')
            return j;
    }
    return 0;
}

int get_i(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        if (move_p_i(map, i) != 0) {
            return i;
        }
    }
    return 0;
}

int get_j(char **map)
{
    int j = 0;

    for (int i = 0; map[i] != NULL; i++) {
        j = move_p_j(map, i);
        if (j != 0)
            return j;
    }
    return 0;
}
