/*
** EPITECH PROJECT, 2022
** myputnbr
** File description:
** nbr
*/

#include "./my.h"

static void negative(void)
{
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);

    if (nb == -2147483648)
        negative();

    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return 0;
}
