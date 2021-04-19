/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** main
*/

#include "bsq.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (error(av[1]) == 1)
        return (84);
    
    if (bsq(av[1]) == 84)
        return (84);
    return (0);
}
