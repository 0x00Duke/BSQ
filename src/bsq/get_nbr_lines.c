/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** get_number_of_lines
*/

#include "bsq.h"

int nbr_lines(char *buffer, int size_of_read)
{
    int x = -1;
    int i = 0;

    while (i != size_of_read) {
        if (buffer[i] == '\n')
            x++;
        i++;
    }
    return (x);
}