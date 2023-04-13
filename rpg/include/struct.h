/*
** EPITECH PROJECT, 2023
** struct
** File description:
** mul
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/RectangleShape.h>
    #include <SFML/Graphics/Sprite.h>
    #include <SFML/Graphics/Texture.h>

typedef struct window_s {
    sfRenderWindow *win;
    sfVideoMode mode;
    sfEvent event;
    sfImage *img;
} win_t;

typedef struct sprite_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfColor pix_clr;
} spt_t;

typedef struct text_s {
    sfText *text;
    sfFont *font;
} txt_t;

typedef struct button_s {
    txt_t *txt;
    sfRectangleShape *rect;
    sfVector2f scale;
    sfVector2f pos;
    sfColor color;
} btn_t;

typedef struct unit_s {
    char *unit;
    int pv;
    int atk;
    int vit;
} unit_t;

#endif
