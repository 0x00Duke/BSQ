/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** free the array
*/

#include "bsq.h"

void free_array(char **array)
{
    int x = 0;

    while (array[x] != NULL) {
        free(array[x]);
        x++;
    }
}