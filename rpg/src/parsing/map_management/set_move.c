/*
** EPITECH PROJECT, 2023
** set_move
** File description:
** mul
*/

#include <stdbool.h>
#include "constant.h"
#include "rpg.h"

static bool init_left(char **map, int i, int j)
{
    bool value = false;

    value = set_left(map, i, &j);
    return value;
}

static bool init_right(char **map, int i, int j)
{
    bool value = false;

    value = set_right(map, i, &j);
    return value;
}

static bool init_up(char **map, int i, int j)
{
    bool value = false;

    value = set_up(map, &i, j);
    return value;
}

static bool init_down(char **map, int i, int j)
{
    bool value = false;

    value = set_down(map, &i, j);
    return value;
}

int set_move(char **map, int i, int j)
{
    if ((sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue ||
    sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue) && init_left(map, i, j) == true)
        return left;
    if ((sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue ||
    sfKeyboard_isKeyPressed(sfKeyD) == sfTrue) &&
    init_right(map, i, j) == true)
        return right;
    if ((sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue ||
    sfKeyboard_isKeyPressed(sfKeyZ) == sfTrue) && init_up(map, i, j) == true)
        return up;
    if ((sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue ||
    sfKeyboard_isKeyPressed(sfKeyS) == sfTrue) && init_down(map, i, j) == true)
        return down;
    return 0;
}
