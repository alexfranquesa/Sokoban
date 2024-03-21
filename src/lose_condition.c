/*
** EPITECH PROJECT, 2023
** lose_condition
** File description:
** sokoban
*/

#include "my.h"

void lose_condition(int b, int a, sokoban_t lose)
{
    if (lose.first_map[b][a] == 'X') {
        if (((lose.first_map[b][a + 1] == '#'
            && lose.first_map[b + 1][a] == '#') ||
            (lose.first_map[b][a - 1] == '#'
            && lose.first_map[b - 1][a] == '#') ||
            (lose.first_map[b + 1][a] == '#'
            && lose.first_map[b][a - 1] == '#') ||
            (lose.first_map[b - 1][a] == '#'
            && lose.first_map[b][a + 1] == '#')) &&
            lose.first_map[b][a] != 'O') {
                endwin();
                exit(1);
            }
    }
}

void lose(sokoban_t lose)
{
    int a = 0;
    int b = 0;

    while (a < lose.rows) {
        b = 0;
        while (lose.first_map[a][b] != '\0') {
            lose_condition(a, b, lose);
            b++;
        }
        a++;
    }
}
