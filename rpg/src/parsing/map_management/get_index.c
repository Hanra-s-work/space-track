/*
** EPITECH PROJECT, 2023
** get_index
** File description:
** mul
*/

#include <stddef.h>

int move_p_i(char **map, int i, int j)
{
    if (map[i][j] == 'P')
        return i;
}

int get_i(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            move_p_i(map, i, j);
        }
    }
    return 0;
}

int move_p_j(char **map, int i, int j)
{
    if (map[i][j] == 'P')
        return j;
}

int get_j(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            move_p_j(map, i, j);
        }
    }
    return 0;
}
