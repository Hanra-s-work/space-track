/*
** EPITECH PROJECT, 2023
** move_rick
** File description:
** mul
*/

#include "rpg.h"
#include "constant.h"

static int do_left(char **map, spt_t *spt, int i, int j)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ) || sfKeyboard_isKeyPressed(sfKeyLeft)) {
        move_left_r(spt);
        move_map_left(map, spt, i, j);
        return left;
    } else {
        if (map[i][j - 1] == 'X') {
            map[i][j - 1] = '.';
        }
    }
    return 1;
}

static int do_right(char **map, spt_t *spt, int i, int j)
{
    if (sfKeyboard_isKeyPressed(sfKeyD) ||
        sfKeyboard_isKeyPressed(sfKeyRight)) {
        move_right_r(spt);
        move_map_right(map, spt, i, j);
        return right;
    } else {
        if (map[i][j + 1] == 'X')
            map[i][j + 1] = '.';
    }
    return 1;
}

static int do_up(char **map, spt_t *spt, int i, int j)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp)) {
        move_top_r(spt);
        move_map_up(map, spt, i, j);
        return up;
    } else {
        if (map[i - 1][j] == 'X')
            map[i - 1][j] = '.';
    }
    return 1;
}

static int which_direction(char **map, spt_t *spt, int i, int j)
{
    static int control = 0;

    if (do_left(map, spt, i, j) == left)
        control = left;
    if (do_right(map, spt, i, j) == right)
        control = right;
    if (do_up(map, spt, i, j) == up)
        control = up;
    if (sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyDown)) {
        move_down_r(spt);
        control = down;
        move_map_down(map, spt, i, j);
    } else {
        if (map[i + 1][j] == 'X')
            map[i + 1][j] = '.';
    }
    return control;
}

int control_rick(spt_t *spt, char **map)
{
    static int control = 0; int i = get_i(map); int j = get_j(map);

    if ((sfKeyboard_isKeyPressed(sfKeyQ) ||
        sfKeyboard_isKeyPressed(sfKeyLeft)) &&
        (sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp)))
        return left;
    if ((sfKeyboard_isKeyPressed(sfKeyQ) ||
        sfKeyboard_isKeyPressed(sfKeyLeft)) &&
        (sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyDown)))
        return down;
    if ((sfKeyboard_isKeyPressed(sfKeyD) ||
        sfKeyboard_isKeyPressed(sfKeyRight)) &&
        (sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyDown)))
        return right;
    if ((sfKeyboard_isKeyPressed(sfKeyD) ||
        sfKeyboard_isKeyPressed(sfKeyRight)) &&
        (sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp)))
        return up;
    control = which_direction(map, spt, i, j);
    return control;
}
