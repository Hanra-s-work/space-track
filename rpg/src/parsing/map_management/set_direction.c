/*
** EPITECH PROJECT, 2023
** set_direction
** File description:
** mul
*/

#include <stdbool.h>
#include "rpg.h"

bool set_left(char **map, int i, int *j)
{
    if (map[i][*j] == 'P' && map[i][*j - 1] == '.') {
        map[i][*j] = '.';
        map[i][*j - 1] = 'P';
        *j -= 1;
        return true;
    }
    return false;
}

bool set_right(char **map, int i, int *j)
{
    if (map[i][*j] == 'P' && map[i][*j + 1] == '.') {
        map[i][*j] = '.';
        map[i][*j + 1] = 'P';
        *j += 1;
        return true;
    }
    return false;
}

bool set_up(char **map, int *i, int j)
{
    if (map[*i][j] == 'P' && map[*i - 1][j] == '.') {
        map[*i][j] = '.';
        map[*i - 1][j] = 'P';
        *i -= 1;
        return true;
    }
    return false;
}

bool set_down(char **map, int *i, int j)
{
    if (map[*i][j] == 'P' && map[*i + 1][j] == '.') {
        map[*i][j] = '.';
        map[*i + 1][j] = 'P';
        *i += 1;
        return true;
    }
    return false;
}
