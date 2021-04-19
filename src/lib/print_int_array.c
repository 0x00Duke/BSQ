/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** print an int double array
*/

#include "bsq.h"

int print_int_array(t_array_info *array_info)
{
    int x = 0;
    int y = 0;

    while (y != NUM_LINES){
        x = 0;
        while(x != SIZE_LINE){
            if (x > (RES_X - RES_VALUE) && x <= (RES_X) && 
            y > (RES_Y - RES_VALUE) && y <= (RES_Y))
                my_putchar('x');
            else if (ARRAY[y][x] == 0)
                my_putchar('o');
            else
                my_putchar('.');
            x++;
        }
        my_putchar('\n');
        free(ARRAY[y]);
        y++;
    }
    free(ARRAY);
    return (0);
}