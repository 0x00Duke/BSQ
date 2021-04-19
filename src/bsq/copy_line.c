/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** copy line in array 
*/

#include "bsq.h"

int *copy_line(char *buffer, int size_line)
{
    int i = 0;
    int *line = malloc(sizeof(int) * (size_line));

    if (line == NULL)
        return (NULL);
    while (i != size_line) {
        if (buffer[0] == 'o')
            line[i] = 0;
        else if (buffer[0] == '.')
            line[i] = 1;
        else
            return (NULL);
        buffer++;
        i++;
    }
    return (line);
}