/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** intro.h
*/

#ifndef TEXT_H_
    #define TEXT_H_

    #include <SFML/Graphics.h>

typedef struct intro_txt_s {
    char *txt;
    sfFont *font;
    sfText *text;
    int max_size;
} intro_txt_t;

typedef struct s_intro_s {
    sfRectangleShape *rect;
    sfTexture *t_eve;
    sfSprite *s_eve;
    sfTexture *t_bkg;
    sfSprite *s_bkg;
} s_intro_t;

typedef struct b_txt_s {
    intro_txt_t *t;
    sfRectangleShape *rect;
    sfVector2f scale;
    sfVector2f pos;
    sfColor color;
} b_txt_t;

#endif
