/*
** EPITECH PROJECT, 2023
** player_pos
** File description:
** sokoban
*/

#include "my.h"

sokoban_t search_for_player(sokoban_t sokoban, int b, int a)
{
    if (sokoban.first_map[b][a] == 'P') {
        sokoban.posa = a;
        sokoban.posb = b;
    }
    return sokoban;
}

sokoban_t search_player(sokoban_t sokoban)
{
    int a = 0;
    int b = 0;

    while (a < sokoban.rows) {
        b = 0;
        while (sokoban.first_map[a][b] != '\0') {
            sokoban = search_for_player(sokoban, a, b);
            b++;
        }
        a++;
    }
    return sokoban;
}
