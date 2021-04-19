/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** error handling
*/

#include "bsq.h"

int error(char *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return (1);
    if (file_size(filepath) == 0)
        return (1);
    return (0);
}