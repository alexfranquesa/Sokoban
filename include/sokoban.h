/*
** EPITECH PROJECT, 2023
** sokoban.h
** File description:
** sokoban.h
*/

#ifndef SOKOBAN_H
    #define SOKOBAN_H

typedef struct sokoban_s {
    char *buff;
    char **first_map;
    char **second_map;
    int rows;
    int colums;
    int posa;
    int posb;
    int rd;
    int fd;
    int size;
}sokoban_t;

#endif /* !SOKOBAN_H */
