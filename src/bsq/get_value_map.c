/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** get the array with the value of each case
*/

#include "bsq.h"

t_array_info *get_value_map(t_array_info *array_info)
{
    int x = 0;
    int y = 0;

    while (y != NUM_LINES){
        x = 0;
        while(x != SIZE_LINE){
            if (y == 0 || x == 0 || (ARRAY[y][x] == 0))
                ARRAY[y][x] = ARRAY[y][x];
            else if (ARRAY[y][x] == 1)
                ARRAY[y][x] = smallest(ARRAY[y][x - 1], ARRAY[y - 1][x],
                                                 ARRAY[y - 1][x - 1]) + 1;
            if (ARRAY[y][x] > RES_VALUE){
                RES_VALUE = ARRAY[y][x];
                RES_X = x;
                RES_Y = y;
            }
            x++;
        }
        y++;
    }
    return (array_info);
}