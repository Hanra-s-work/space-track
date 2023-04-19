/*
** EPITECH PROJECT, 2023
** set_move
** File description:
** mul
*/

#include <stdbool.h>
#include "constant.h"
#include "rpg.h"

static bool init_left(char **map)
{
    bool value = false;

    for (int i = 0; map[i] != NULL; i++) {
        value = set_left(map, i);
        if (value == true)
            break;
    }
    return value;
}

static bool init_right(char **map)
{
    bool value = false;

    for (int i = 0; map[i] != NULL; i++) {
        value = set_right(map, i);
        if (value == true)
            break;
    }
    return value;
}

static bool init_up(char **map)
{
    bool value = false;

    for (int i = 1; map[i] != NULL; i++) {
        value = set_up(map, i);
        if (value == true)
            break;
    }
    return value;
}

static bool init_down(char **map)
{
    bool value = false;

    for (int i = 0; map[i] != NULL; i++) {
        value = set_down(map, i);
        if (value == true)
            break;
    }
    return value;
}

int set_move(char **map)
{
    if ((sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue ||
        sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue) && init_left == true)
            return left;
    if ((sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue ||
        sfKeyboard_isKeyPressed(sfKeyD) == sfTrue) && init_right == true)
            return right;
    if ((sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue ||
        sfKeyboard_isKeyPressed(sfKeyZ) == sfTrue) && init_up == true)
            return up;
    if ((sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue ||
        sfKeyboard_isKeyPressed(sfKeyS) == sfTrue) && init_down == true)
            return down;
    return 0;
}
