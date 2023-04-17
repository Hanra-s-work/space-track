/*
** EPITECH PROJECT, 2023
** fill_stat_struct
** File description:
** mul
*/


#include "my.h"
#include "rpg.h"
#include "struct.h"

static int get_array_size(char **array)
{
    int size = 0;

    for (int i = 0; array[i] != NULL; i++) {
        size++;
    }
    return size;
}

static void free_all(char **tab, char *buffer)
{
    free_tab(tab);
    free(buffer);
}

void fill_stat_struct(unit_t *unit)
{
    char *buffer = get_buffer("./rpg/assets/stat.txt");
    char **tab = my_str_to_word_array(buffer, '\n');
    char **temp = NULL;
    int size = get_array_size(tab);
    int j = 0;

    unit = malloc(sizeof(unit_t) * (size + 1));
    for (int i = 0; tab[i] != NULL; i++) {
        if (tab[i][0] == '#')
            continue;
        temp = my_str_to_word_array(tab[i], ' ');
        unit[j].unit = my_strdup(temp[0]);
        unit[j].pv = my_getnbr(temp[1]);
        unit[j].atk = my_getnbr(temp[2]);
        unit[j].vit = my_getnbr(temp[3]);
        free_tab(temp);
        j++;
    }
    unit[0].max_size = j;
    free_all(tab, buffer);
}
