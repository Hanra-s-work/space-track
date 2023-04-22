/*
** EPITECH PROJECT, 2023
** set_move
** File description:
** mul
*/

#include <stdbool.h>
#include "constant.h"
#include "rpg.h"

void move_map_up(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_up(map, &i, j) == true) {
        if (map[i - 1][j] != '#' && map[i - 1][j] != ' ')
            map[i - 1][j] = 'X';
        else {
            map[i][j] = 'P';
            map[i + 1][j] = '.';
        }
        vector.y += 89.2f;
        sfSprite_setPosition(spt[5].sprite, vector);
    }
}

void move_map_down(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_down(map, &i, j) == true) {
        if (map[i + 1][j] != '#' && map[i - 1][j] != ' ')
            map[i + 1][j] = 'X';
        else {
            map[i][j] = 'P';
            map[i - 1][j] = '.';
        }
        vector.y -= 89.2f;
        sfSprite_setPosition(spt[5].sprite, vector);
    }
}

void move_map_left(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_left(map, i, &j) == true) {
        if (map[i][j - 1] != '#' && map[i - 1][j] != ' ')
            map[i][j - 1] = 'X';
        else {
            map[i][j] = 'P';
            map[i][j + 1] = '.';
        }
        vector.x += 91.4f;
        sfSprite_setPosition(spt[5].sprite, vector);
    }
}

void move_map_right(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_right(map, i, &j) == true) {
        if (map[i][j +1] != '#' && map[i - 1][j] != ' ')
            map[i][j + 1] = 'X';
        else {
            map[i][j] = 'P';
            map[i][j - 1] = '.';
        }
        vector.x -= 91.4f;
        sfSprite_setPosition(spt[5].sprite, vector);
    }
}
