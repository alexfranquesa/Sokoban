/*
** EPITECH PROJECT, 2023
** cpoolday04
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        str++;
    }
    return 0;
}
