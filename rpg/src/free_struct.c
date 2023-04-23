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
    for (int i = 0; i <= 18; i++) {
        sfRectangleShape_destroy(btn[i].rect);
    }
    sfRenderWindow_destroy(win[0].win);
    sfSprite_destroy(spt[0].sprite);
    sfTexture_destroy(spt[0].texture);
    sfMusic_destroy(win[1].music);
}

void free_struct(win_t *win, spt_t *spt, btn_t *btn, txt_t *txt)
{
    free(win);
    free(spt);
    free(btn);
    free(txt);
}
