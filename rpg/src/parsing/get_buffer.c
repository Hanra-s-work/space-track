/*
** EPITECH PROJECT, 2023
** open_file
** File description:
** antman
*/

#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

static int file_size(char *filepath)
{
    struct stat info;

    if (stat(filepath, &info) == -1) {
        return -84;
    }
    return info.st_size;
}

char *get_buffer(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size = 0;
    char *buffer = NULL;

    if (fd <= 0)
        return NULL;
    size = file_size(filepath);
    if (size == -84) {
        close(fd);
        return NULL;
    }
    buffer = malloc(sizeof(char) * (size + 1));
    if (buffer == NULL || read(fd, buffer, size) <= 0) {
        close(fd);
        return NULL;
    }
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
