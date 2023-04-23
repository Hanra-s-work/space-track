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
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>

typedef struct window_s {
    sfRenderWindow *win;
    sfVideoMode mode;
    sfEvent event;
    sfImage *img;
    sfMusic *music;
} win_t;

typedef struct sprite_s {
    char *path;
    float s;
    sfTexture *texture;
    sfSprite *sprite;
    sfColor pix_clr;
    sfVector2f positions;
    sfIntRect image;
    sfClock *clock;
    sfTime time;
    sfIntRect rect;
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
    spt_t *object;
    int x;
    int y;
    struct inventory_s *next;
    struct inventory_s *prev;
} btn_t;

typedef struct unit_s {
    char *unit;
    int pv;
    int atk;
    int vit;
    int max_size;
} unit_t;

#endif
