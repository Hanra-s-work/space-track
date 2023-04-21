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

typedef struct window_s {
    sfRenderWindow *win;
    sfVideoMode mode;
    sfEvent event;
    sfImage *img;
} win_t;

typedef struct clk_s {
    sfClock *clock;
    sfTime time;
    sfIntRect rect;
    float s;
} clk_t;
typedef struct sprite_s {
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    sfColor pix_clr;
    sfVector2f positions;
    sfIntRect image;
    clk_t *clk;
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


typedef struct inventory_s {
    spt_t *object;
    int x;
    int y;
    struct inventory_s *next;
    struct inventory_s *prev;
} inventory_t;

typedef struct unit_s {
    char *unit;
    int pv;
    int atk;
    int vit;
    int max_size;
} unit_t;

#endif
