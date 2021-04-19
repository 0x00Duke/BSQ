/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** get the array
*/

#include "bsq.h"

t_array_info *get_array(char *file_path)
{
    char *buffer = malloc(file_size(file_path) + 1);
    char *tmp = buffer;
    int fd = open(file_path, O_RDONLY);
    t_array_info *array_info = malloc(sizeof(t_array_info));
    int size_of_read = read(fd, buffer, file_size(file_path));
    buffer[size_of_read] = '\0';
    if (size_of_read == -1 || buffer == NULL || array_info == NULL)
        return (NULL);
    NUM_LINES = nbr_lines(buffer, size_of_read);
    SUP_NUM_LINE = get_supposed_number_lines(buffer);
    buffer = check_num_lines(buffer, SUP_NUM_LINE, NUM_LINES);
    if (NUM_LINES == 84 || SUP_NUM_LINE == 84 || buffer == NULL)
        return (NULL);
    SIZE_LINE = size_of_line(buffer);
    ARRAY = buff_to_array(buffer, NUM_LINES, SIZE_LINE);
    if (ARRAY == NULL)
        return (NULL);
    close(fd);
    buffer = tmp;
    free(buffer);
    return (array_info);
}