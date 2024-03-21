/*
** EPITECH PROJECT, 2023
** open_read_map
** File description:
** sokoban
*/

#include "my.h"

char *open_read_map(char const *filepath, sokoban_t sokoban)
{
    struct stat sb;

    sokoban.fd = open(filepath, O_RDONLY);
    stat(filepath, &sb);
    sokoban.buff = malloc(sb.st_size);
    sokoban.rd = read(sokoban.fd, sokoban.buff, sb.st_size);
    sokoban.buff[sokoban.rd] = '\0';
    if (sokoban.size == -1 && sokoban.rd == -1) {
        exit(84);
    }
    if (sokoban.fd == -1) {
        exit(84);
    }
    close(sokoban.rd);
    return sokoban.buff;
}

sokoban_t print_map(char const *filepath, sokoban_t sokoban)
{
    int pos = 0;
    int colum = 0;

    sokoban.buff = open_read_map(filepath, sokoban);
    sokoban = count_rows(sokoban);
    sokoban.first_map = malloc(sizeof(char *) * sokoban.rows);
    sokoban.second_map = malloc(sizeof(char *) * sokoban.rows);
    for (int j = 0; j < sokoban.rows; j++) {
        colum = count_cols(sokoban, pos);
        sokoban.first_map[j] = malloc(sizeof(char *) * colum + 1);
        sokoban.second_map[j] = malloc(sizeof(char *) * colum + 1);
        for (int i = 0; i < colum; i++) {
            sokoban.first_map[j][i] = sokoban.buff[pos];
            sokoban.second_map[j][i] = sokoban.buff[pos];
            pos++;
        }
        pos++;
    }
    return sokoban;
}
