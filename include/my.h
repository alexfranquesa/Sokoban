/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include "sokoban.h"
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <ncurses.h>
    #include <curses.h>
    #include <string.h>

sokoban_t count_rows(sokoban_t sokoban);
int count_cols(sokoban_t sokoban, int pos);
sokoban_t print_map(char const *filepath, sokoban_t sokoban);
int my_sokoban(char const *filepath);
sokoban_t search_player(sokoban_t sokoban);
sokoban_t go_down(sokoban_t move_down);
sokoban_t go_up(sokoban_t move_up);
sokoban_t go_right(sokoban_t move_rigth);
sokoban_t go_left(sokoban_t move_left);
sokoban_t use_keys(sokoban_t keys, int key);
sokoban_t go_all_up(sokoban_t move_up);
sokoban_t go_all_down(sokoban_t move_down);
sokoban_t go_all_left(sokoban_t move_left);
sokoban_t go_all_right(sokoban_t move_right);
void lose(sokoban_t lose);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
void my_putchar(char c);
int my_strlen(char const *str);
int help_flag(void);




#endif /* !MY_H */
