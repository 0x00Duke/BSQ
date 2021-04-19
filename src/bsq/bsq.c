/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** main fonction
*/

#include "bsq.h"

int bsq(char *filepath)
{
    t_array_info *array = get_array(filepath);

    if (array == NULL)
        return (84);
    array->result_info.value = 0;
    array = get_value_map(array);
    if (array == NULL)
        return (84);
    print_int_array(array);
    free(array);
    return (0);
}