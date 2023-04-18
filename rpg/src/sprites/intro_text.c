/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** intro_text.c
*/

#include "intro.h"
#include "rpg.h"

void init_graphic_text(intro_txt_t *t)
{
    sfFont *f = sfFont_createFromFile("./font/KGBlankSpaceSketch.ttf");

    for (int i = 0; i < t[0].max_size; i++) {
        t[i].text = sfText_create();
        sfText_setString(t[i].text, t[i].txt);
        sfText_setFont(t[i].text, f);
        sfText_setCharacterSize(t[i].text, 24);
        sfText_setFillColor(t[i].text, sfWhite);
        sfText_setPosition(t[i].text, (sfVector2f){250, 900});
    }
}
