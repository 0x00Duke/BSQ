/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** check num of lines with num beggining
*/

#include "bsq.h"

char *check_num_lines(char *buffer, int supposed_num, int num_of_lines)
{
    int i = 0;

    while (buffer[i] != '\n') {
        i++;
    }
    while (i != 0) {
        buffer++;
        i--;
    }
    buffer++;
    if (supposed_num == num_of_lines){
        return (buffer);
    }
    else
        return (NULL);
}