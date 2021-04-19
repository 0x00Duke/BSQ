/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** print an array
*/

#include "bsq.h"

int print_array(char **array)
{
    int x = 0;

    while (array[x] != NULL){
        my_putstr(array[x]);
        my_putchar('\n');
        free(array[x]);
        x++;
    }
    free(array[x]);
    free(array);
    return (0);
}