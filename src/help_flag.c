/*
** EPITECH PROJECT, 2023
** help_flag
** File description:
** sokoban
*/

#include "my.h"

int help_flag(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representing the warehouse map, ");
    my_putstr("containing '#' for walls,\n");
    my_putstr("\t'P' for the player, 'X' for boxes and ");
    my_putstr("'O' for storage locations.\n");
    return 0;
}
