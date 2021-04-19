/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** have the size of a line
*/

#include "bsq.h"

int size_of_line(char *buffer)
{
    int x = 0;
    int i = 0;

    while (buffer[i] != '\n'){
        x++;
        i++;
    }
    return (x);
}