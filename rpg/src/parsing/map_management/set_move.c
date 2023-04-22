/*
** EPITECH PROJECT, 2023
** set_move
** File description:
** mul
*/

#include <stdbool.h>
#include "constant.h"
#include "rpg.h"

bool init_left(char **map, int i, int j)
{
    bool value = false;

    value = set_left(map, i, &j);
    return value;
}

bool init_right(char **map, int i, int j)
{
    bool value = false;

    value = set_right(map, i, &j);
    return value;
}

bool init_up(char **map, int i, int j)
{
    bool value = false;

    value = set_up(map, &i, j);
    return value;
}

bool init_down(char **map, int i, int j)
{
    bool value = false;

    value = set_down(map, &i, j);
    return value;
}
