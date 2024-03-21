/*
** EPITECH PROJECT, 2023
** player_movement
** File description:
** sokoban
*/

#include "my.h"

sokoban_t go_all_left(sokoban_t move_left)
{
    if (move_left.first_map[move_left.posb][move_left.posa - 1] != '#') {
        if (move_left.first_map[move_left.posb][move_left.posa - 1] == 'X')
            move_left = go_left(move_left);
        else {
            move_left.first_map[move_left.posb][move_left.posa - 1] = 'P';
            move_left.first_map[move_left.posb][move_left.posa] = ' ';
            move_left.posa --;
        }
    }
    return move_left;
}

sokoban_t go_all_right(sokoban_t move_right)
{
    if (move_right.first_map[move_right.posb][move_right.posa + 1] != '#') {
        if (move_right.first_map[move_right.posb][move_right.posa + 1] == 'X')
            move_right = go_right(move_right);
        else {
            move_right.first_map[move_right.posb][move_right.posa + 1] = 'P';
            move_right.first_map[move_right.posb][move_right.posa] = ' ';
            move_right.posa ++;
        }
    }
    return move_right;
}

sokoban_t go_all_up(sokoban_t move_up)
{
    if (move_up.first_map[move_up.posb - 1][move_up.posa] != '#') {
        if (move_up.first_map[move_up.posb - 1][move_up.posa] == 'X')
            move_up = go_up(move_up);
        else {
            move_up.first_map[move_up.posb - 1][move_up.posa] = 'P';
            move_up.first_map[move_up.posb][move_up.posa] = ' ';
            move_up.posb --;
        }
    }
    return move_up;
}

sokoban_t go_all_down(sokoban_t move_down)
{
    if (move_down.first_map[move_down.posb + 1][move_down.posa] != '#') {
        if (move_down.first_map[move_down.posb + 1][move_down.posa] == 'X')
            move_down = go_down(move_down);
        else {
            move_down.first_map[move_down.posb + 1][move_down.posa] = 'P';
            move_down.first_map[move_down.posb][move_down.posa] = ' ';
            move_down.posb ++;
        }
    }
    return move_down;
}
