/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** get_supposed_number_of_lines
*/

#include "bsq.h"

int get_supposed_number_lines(char *buffer)
{
    int i = 0;
    char *num_str;

    while (buffer[i] != '\n' && buffer[i] != '\0') {
        if (buffer[i] >= '0' && buffer[i] <= '9')
            i++;
        else
            return (84);
    }
    num_str = malloc(i + 1);
    if (num_str == NULL)
        return (84);
    i = 0;
    while (buffer[i] != '\n') {
        num_str[i] = buffer[i];
        i++;
    }
    num_str[i] = '\0';
    if (my_getnbr(num_str) < 1)
        return (84);
    return (my_getnbr(num_str));
}