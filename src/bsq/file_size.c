/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** open file and copy the content into a str
*/

#include "bsq.h"

int file_size(char *file_path)
{
    struct stat sb;

    if (stat(file_path, &sb) != -1) {
        return (sb.st_size);    
    }
    return (84);
}
