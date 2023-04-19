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

void init_intro_text(text_t *txt)
{
    char name[100] = "./rpg/assets/font/KGBlankSpaceSketch.ttf";
    sfFont *f = sfFont_createFromFile(name);
    sfVector2f pos_txt = {250, 900};
    char *intro_buffer = get_buffer("./rpg/assets/config/context.txt");
    char **tab = my_str_to_word_array(intro_buffer, '\n');

    for (int i = 0; tab[i] != NULL; i++) {
        txt[i].text = sfText_create();
        sfText_setString(txt[i].text, tab[i]);
        sfText_setFont(txt[i].text, f);
        sfText_setCharacterSize(txt[i].text, 24);
        sfText_setFillColor(txt[i].text, sfWhite);
        sfText_setPosition(txt[i].text, pos_txt);
    }
    free(intro_buffer);
    free_tab(tab);
}
