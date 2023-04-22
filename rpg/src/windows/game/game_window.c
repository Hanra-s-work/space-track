/*
** EPITECH PROJECT, 2023
** game
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"
#include "constant.h"

void move_map_up(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_up(map, &i, j) == true) {
        if (map[i - 1][j] != '#' || map[i - 2][j] != '#')
            map[i - 1][j] = '#';
        vector.y += 93;
        sfSprite_setPosition(spt[5].sprite, vector);
        for (int x = 0; map[x] != NULL; x++) {
            printf("%s\n", map[x]);
        }
    }
}

void move_map_down(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_down(map, &i, j) == true) {
        if (map[i + 1][j] != '#' || map[i + 2][j] != '#')
            map[i + 1][j] = '#';
        vector.y -= 93;
        sfSprite_setPosition(spt[5].sprite, vector);
        for (int x = 0; map[x] != NULL; x++) {
            printf("%s\n", map[x]);
        }
    }
}

void move_map_left(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_left(map, i, &j) == true) {
        if (map[i][j - 1] != '#' || map[i][j - 2] != '#')
            map[i][j - 1] = '#';
        vector.x += 93;
        sfSprite_setPosition(spt[5].sprite, vector);
        for (int x = 0; map[x] != NULL; x++) {
            printf("%s\n", map[x]);
        }
    }
}

void move_map_right(char **map, spt_t *spt, int i, int j)
{
    sfVector2f vector = sfSprite_getPosition(spt[5].sprite);

    if (set_right(map, i, &j) == true) {
        if (map[i][j + 1] != '#' || map[i][j + 2] != '#')
            map[i][j + 1] = '#';
        vector.x -= 93;
        sfSprite_setPosition(spt[5].sprite, vector);
        for (int x = 0; map[x] != NULL; x++) {
            printf("%s\n", map[x]);
        }
    }
}

int controle_rick(win_t *win, btn_t *btn, spt_t *spt, char **map)
{
    static int control = 0;
    int i = get_i(map);
    int j = get_j(map);

    if ((sfKeyboard_isKeyPressed(sfKeyQ) || sfKeyboard_isKeyPressed(sfKeyLeft)) &&
        (sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp)))
        return left;
    if ((sfKeyboard_isKeyPressed(sfKeyQ) || sfKeyboard_isKeyPressed(sfKeyLeft)) &&
        (sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyDown)))
        return down;
    if ((sfKeyboard_isKeyPressed(sfKeyD) || sfKeyboard_isKeyPressed(sfKeyRight)) &&
        (sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyDown)))
        return right;
    if ((sfKeyboard_isKeyPressed(sfKeyD) || sfKeyboard_isKeyPressed(sfKeyRight)) &&
        (sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp)))
        return up;
    if (sfKeyboard_isKeyPressed(sfKeyQ) || sfKeyboard_isKeyPressed(sfKeyLeft)) {
        move_left_r(spt);
        control = left;
        move_map_left(map, spt, i, j);
    } else {
        if (map[i][j - 2] != ' ' && map[i][j - 2] != '#')
            map[i][j - 1] = '.';
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) ||
        sfKeyboard_isKeyPressed(sfKeyRight)) {
        move_right_r(spt);
        control = right;
        move_map_right(map, spt, i, j);
    } else {
        if (map[i][j + 2] != ' ' && map[i][j + 2] != '#')
            map[i][j + 1] = '.';
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp)) {
        move_top_r(spt);
        control = up;
        move_map_up(map, spt, i, j);
    } else {
        if (map[i - 2][j] != ' ' && map[i - 2][j] != '#')
            map[i - 1][j] = '.';
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyDown)) {
        move_down_r(spt);
        control = down;
        move_map_down(map, spt, i, j);
    } else {
        if (map[i + 2][j] != ' ' && map[i + 2][j] != '#')
            map[i + 1][j] = '.';
    }
    return control;
}

void draw_sprite(int control, win_t *win, btn_t *btn, spt_t *spt)
{
    if (control == left) {
        sfRenderWindow_drawSprite(win[2].win, spt[7].sprite, NULL);
        sfSprite_setTextureRect(spt[7].sprite, spt[1].rect);
        sfSprite_setPosition(spt[7].sprite, (sfVector2f){925, 440});
    }
    if (control == right) {
        sfRenderWindow_drawSprite(win[2].win, spt[9].sprite, NULL);
        sfSprite_setTextureRect(spt[9].sprite, spt[3].rect);
        sfSprite_setPosition(spt[9].sprite, (sfVector2f){925, 440});
    }
    if (control == up) {
        sfRenderWindow_drawSprite(win[2].win, spt[6].sprite, NULL);
        sfSprite_setTextureRect(spt[6].sprite, spt[0].rect);
        sfSprite_setPosition(spt[6].sprite, (sfVector2f){925, 440});
    }
    if (control == down) {
        sfRenderWindow_drawSprite(win[2].win, spt[8].sprite, NULL);
        sfSprite_setTextureRect(spt[8].sprite, spt[2].rect);
        sfSprite_setPosition(spt[8].sprite, (sfVector2f){925, 440});
    }
}

void init_game(win_t *win, btn_t *btn, spt_t *spt)
{
    spt[0].clock = sfClock_create();
    created_game_window(win);
    set_button_setting(btn);
    set_button_inventory(btn);
    map_sprite(spt);
    rick_up(spt);
    rick_left(spt);
    rick_right(spt);
    rick_down(spt);
    //guard_right(spt);
}

void draw_all(win_t *win, btn_t *btn, spt_t *spt, char **map)
{
    static int control = 0;

    control = controle_rick(win, btn, spt, map);
    sfRenderWindow_drawSprite(win[2].win, spt[5].sprite, NULL);
    if (control == 0) {
        sfRenderWindow_drawSprite(win[2].win, spt[6].sprite, NULL);
        sfSprite_setTextureRect(spt[6].sprite, spt[0].rect);
        sfSprite_setPosition(spt[6].sprite, (sfVector2f){925, 440});
    }
    //sfRenderWindow_drawSprite(win[2].win, spt[10].sprite, NULL);
    draw_sprite(control, win, btn, spt);
    draw_button_game(win, btn);
}

int game_window(win_t *win, btn_t *btn, spt_t *spt, txt_t *txt)
{
    unit_t *unit = NULL;
    char **map = set_map("./rpg/assets/maps/earth.txt");

    init_game(win, btn, spt);
    fill_stat_struct(unit);
    while (sfRenderWindow_isOpen(win[2].win)) {
        sfRenderWindow_clear(win[2].win, sfColor_fromRGB(108, 108, 108));
        action_game_window(win, btn, spt, txt);
        draw_all(win, btn, spt, map);
        sfRenderWindow_display(win[2].win);
    }
    return 0;
}
