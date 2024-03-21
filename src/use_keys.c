/*
** EPITECH PROJECT, 2023
** use_keys
** File description:
** sokoban
*/

#include "my.h"

sokoban_t use_keys(sokoban_t keys, int key)
{
    if (key == KEY_UP)
        keys = go_all_up(keys);
    if (key == KEY_DOWN)
        keys = go_all_down(keys);
    if (key == KEY_LEFT)
        keys = go_all_left(keys);
    if (key == KEY_RIGHT)
        keys = go_all_right(keys);
    return keys;
}
