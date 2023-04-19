/*
** EPITECH PROJECT, 2022
** space-track
** File description:
** intro_text.c
*/

#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Font.h>
#include "my.h"
#include "rpg.h"
#include "struct.h"

void init_intro_text(txt_t *t)
{
    char name[100] = "./rpg/assets/font/KGBlankSpaceSketch.ttf";
    sfFont *f = sfFont_createFromFile(name);
    char *intro_buffer = get_buffer("./rpg/assets/config/context.txt");
    char **tab = my_str_to_word_array(intro_buffer, '\n');

    for (int i = 0; tab[i] != NULL; i++) {
        t[i].text = sfText_create();
        sfText_setString(t[i].text, tab[i]);
        sfText_setFont(t[i].text, f);
        sfText_setCharacterSize(t[i].text, 24);
        sfText_setFillColor(t[i].text, sfWhite);
        sfText_setPosition(t[i].text, (sfVector2f){250, 900});
    }
    free(intro_buffer);
    free_tab(tab);
}
