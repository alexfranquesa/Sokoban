/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** sokoban
*/

#include "my.h"

sokoban_t using_keys(sokoban_t sokoban)
{
    int key = 0;

    key = getch();
    sokoban = use_keys(sokoban, key);
    lose(sokoban);
    return sokoban;
}

int my_sokoban(char const *filepath)
{
    sokoban_t sokoban = print_map(filepath, sokoban);
    sokoban = search_player(sokoban);
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    clear();
    refresh();
    while (1) {
        refresh();
        for (int i = 0; i < sokoban.rows; i++)
            mvprintw(i, 0, "%s\n", sokoban.first_map[i]);
        move(sokoban.posb, sokoban.posa);
        sokoban = using_keys(sokoban);
    }
}
