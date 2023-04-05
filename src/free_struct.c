/*
** EPITECH PROJECT, 2023
** freestruct
** File description:
** rpg
*/

#include <stdlib.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include "struct.h"

void destroy(win_t *win, spt_t *spt, btn_t *btn)
{
    sfRectangleShape_destroy(btn[0].rect);
    sfRenderWindow_destroy(win[0].win);
    sfSprite_destroy(spt[0].sprite);
    sfTexture_destroy(spt[0].texture);
}

void free_struct(win_t *win, spt_t *spt, btn_t *btn)
{
    free(win);
    free(spt);
    free(btn);
}
