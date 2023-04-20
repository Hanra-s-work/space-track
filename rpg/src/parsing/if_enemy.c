/*
** EPITECH PROJECT, 2023
** if_enemy
** File description:
** mul
*/

#include "constant.h"

int if_enemy(char **map, int i, int j)
{
    if (map[i + 1][j] == 'E' || map[i - 1][j] == 'E' ||
        map[i][j - 1] == 'E' || map[i][j + 1] == 'E') {
        return enemy;
    }
    return 0;
}