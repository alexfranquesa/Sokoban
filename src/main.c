/*
** EPITECH PROJECT, 2023
** main
** File description:
** sokoban
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (argv[1][0] == '-' && argv[1][1] == 'h')
        help_flag();
    else
        my_sokoban(argv[1]);
}
