/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** get biggest number out of a list of 3 number
*/

#include "bsq.h"

int smallest(int num_one, int num_two, int num_three)
{
    int result = num_one;

    if (num_two < result)
        result = num_two;
    if (num_three < result)
        result = num_three;
    return (result);
}