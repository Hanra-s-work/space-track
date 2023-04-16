/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** getnbr
*/

#include "./my.h"

int my_getnbr(char const *str)
{
    int number = 0;
    int negative = 1;

    while (*str != '\0') {
        if (*str == '-') {
            negative = negative * (-1);
            str++;
        }
        if (*str == '+')
            str++;
        if (*str >= '0' && *str <= '9') {
            number = number * 10 + (*str - '0');
            str++;
        }
        if (*str < 43 || *str > 57 || *str == 44 || *str == 46 || *str == 47)
            return negative * number;
    }
    return negative * number;
}
