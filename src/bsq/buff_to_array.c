/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** create array and put lines in it
*/

#include "bsq.h"

int **buff_to_array(char *buffer, int number_of_line, int size_line)
{
    int x = 0;
    int **array = malloc(sizeof(int *) * (number_of_line));

    if (array == NULL)
        return (NULL);
    while (x != number_of_line) {
        array[x] = copy_line(buffer, size_line);
        buffer += (size_line + 1);
        if (array[x] == NULL)
            return (NULL);
        x++;
    }
    return (array);
}