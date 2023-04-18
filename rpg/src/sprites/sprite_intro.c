/*
** EPITECH PROJECT, 2023
** intro sprite
** File description:
** eve and background
*/

#include "intro.h"
#include "rpg.h"

void eve_sprite(s_intro_t *s)
{
    sfVector2f pos_eve = {50, 835};
    sfVector2f scale = {0.3f, 0.3};
    s->t_eve = sfTexture_createFromFile("./img/eve.png", NULL);
    s->s_eve = sfSprite_create();
    sfSprite_setTexture(s->s_eve, s->t_eve, sfTrue);
    sfSprite_setScale(s->s_eve, scale);
    sfSprite_setPosition(s->s_eve, pos_eve);
}

void bkg_intro(s_intro_t *s)
{
    sfVector2f pos_bkg = {5, 5};
    s->t_bkg = sfTexture_createFromFile("./img/salle.jpg", NULL);
    sfVector2f scale = {0.7f, 0.48f};
    s->s_bkg = sfSprite_create();
    sfSprite_setTexture(s->s_bkg, s->t_bkg, sfTrue);
    sfSprite_setScale(s->s_bkg, scale);
    sfSprite_setPosition(s->s_bkg, pos_bkg);
}

sfRectangleShape *intro_rect(s_intro_t *s)
{
    sfVector2f pos_rect = {5, 820};
    sfVector2f size_rect = {1910, 200};
    int thickness = 3;
    s->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(s->rect, size_rect);
    sfRectangleShape_setFillColor(s->rect, sfTransparent);
    sfRectangleShape_setOutlineColor(s->rect, sfWhite);
    sfRectangleShape_setOutlineThickness(s->rect, thickness);
    sfRectangleShape_setPosition(s->rect, pos_rect);
    return 0;
}
