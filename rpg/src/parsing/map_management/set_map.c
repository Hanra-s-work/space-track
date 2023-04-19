/*
** EPITECH PROJECT, 2023
** set_map
** File description:
** mul
*/

#include "my.h"
#include "rpg.h"

char **set_map(char *filepath)
{
    char *buffer = get_buffer(filepath);
    char **map = my_str_to_word_array(buffer, '\n');

    free(buffer);
    return map;
}
