/*
** EPITECH PROJECT, 2021
** main
** File description:
** main 104intersection
*/

#include "intersection.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return man();
    if (ac != 9 || is_float(ac, av) == 84)
        return 84;
    if (atof(av[5]) == 0 && atof(av[6]) == 0 && atof(av[7]) == 0)
        return 84;
    return (intersection(av));
}
