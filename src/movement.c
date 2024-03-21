/*
** EPITECH PROJECT, 2023
** movement
** File description:
** sokoban
*/

#include "my.h"

sokoban_t go_down(sokoban_t move_down)
{
    if (move_down.first_map[move_down.posb + 2][move_down.posa] == 'X')
        return move_down;
    else if (move_down.first_map[move_down.posb + 2][move_down.posa] == '#')
        return move_down;
    else {
        move_down.first_map[move_down.posb + 2][move_down.posa] = 'X';
        move_down.first_map[move_down.posb + 1][move_down.posa] = 'P';
        move_down.first_map[move_down.posb][move_down.posa] = ' ';
        move_down.posb++;
    }
    return move_down;
}

sokoban_t go_up(sokoban_t move_up)
{
    if (move_up.first_map[move_up.posb - 2][move_up.posa] == 'X')
        return move_up;
    else if (move_up.first_map[move_up.posb - 2][move_up.posa] == '#')
        return move_up;
    else {
        move_up.first_map[move_up.posb - 2][move_up.posa] = 'X';
        move_up.first_map[move_up.posb - 1][move_up.posa] = 'P';
        move_up.first_map[move_up.posb][move_up.posa] = ' ';
        move_up.posb --;
    }
    return move_up;
}

sokoban_t go_right(sokoban_t move_rigth)
{
    if (move_rigth.first_map[move_rigth.posb][move_rigth.posa + 2] == 'X')
        return move_rigth;
    else if (move_rigth.first_map[move_rigth.posb][move_rigth.posa + 2] == '#')
        return move_rigth;
    else {
        move_rigth.first_map[move_rigth.posb][move_rigth.posa + 2] = 'X';
        move_rigth.first_map[move_rigth.posb][move_rigth.posa + 1] = 'P';
        move_rigth.first_map[move_rigth.posb][move_rigth.posa] = ' ';
        move_rigth.posa++;
    }
    return move_rigth;
}

sokoban_t go_left(sokoban_t move_left)
{
    if (move_left.first_map[move_left.posb][move_left.posa - 2] == 'X')
        return move_left;
    else if (move_left.first_map[move_left.posb][move_left.posa - 2] == '#')
        return move_left;
    else {
        move_left.first_map[move_left.posb][move_left.posa - 2] = 'X';
        move_left.first_map[move_left.posb][move_left.posa - 1] = 'P';
        move_left.first_map[move_left.posb][move_left.posa] = ' ';
        move_left.posa--;
    }
    return move_left;
}
