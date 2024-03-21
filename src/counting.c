/*
** EPITECH PROJECT, 2023
** counting
** File description:
** sokoban
*/

#include "my.h"

sokoban_t count_rows(sokoban_t sokoban)
{
    sokoban.rows = 0;
    for (int i = 0; sokoban.buff[i] != '\0'; i++) {
        if (sokoban.buff[i] == '\0' || sokoban.buff[i] == '\n')
            sokoban.rows++;
    }
    return sokoban;
}

int count_cols(sokoban_t sokoban, int pos)
{
    int colums = 0;

    for (colums = 0; sokoban.buff[pos] != '\n'; pos++) {
        colums++;
    }
    return colums;
}
