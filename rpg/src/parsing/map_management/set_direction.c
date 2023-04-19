/*
** EPITECH PROJECT, 2023
** set_direction
** File description:
** mul
*/

#include <stdbool.h>
#include "rpg.h"

bool set_left(char **map, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == ' ' || map[i][j] == '#' ||
            map[i][j] == '\t' || map[i][j] == '.')
            continue;
        if (j > 0 && map[i][j] == 'P' && map[i][j - 1] == '.') {
            map[i][j] = '.';
            map[i][j - 1] = 'P';
            return true;
        }
        if (j > 0 && map[i][j] == 'P' && map[i][j - 1] == '#') {
            continue;
        }
    }
    return false;
}

bool set_right(char **map, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == ' ' || map[i][j] == '#' ||
            map[i][j] == '\t' || map[i][j] == '.')
            continue;
        if (map[i][j] == 'P' && map[i][j + 1] == '.') {
            map[i][j] = '.';
            map[i][j + 1] = 'P';
            return true;
        }
        if (map[i][j] == 'P' && map[i][j + 1] == '#') {
            continue;
        }
    }
    return false;
}

bool set_up(char **map, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == ' ' || map[i][j] == '#' ||
            map[i][j] == '\t' || map[i][j] == '.')
            continue;
        if (map[i][j] == 'P' && map[i - 1][j] == '.') {
            map[i][j] = '.';
            map[i - 1][j] = 'P';
            return true;
        }
        if (map[i][j] == 'P' && map[i - 1][j] == '#') {
            continue;
        }
    }
    return false;
}

bool set_down(char **map, int i)
{
    if (map[i + 1] == NULL)
        return false;
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] != 'P')
            continue;
        if (map[i][j] == 'P' && map[i + 1][j] == '.') {
            map[i][j] = '.';
            map[i + 1][j] = 'P';
            return true;
        }
        if (map[i][j] == 'P' && map[i + 1][j] == '#') {
            continue;
        }
    }
    return false;
}
