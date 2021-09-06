/*
** EPITECH PROJECT, 2021
** is_float.c
** File description:
** is_float function
*/

#include <string.h>

int is_float(int ac, char **av)
{
    int nb_digits;
    int nb_minus;
    int nb_dots;

    for (int i = 1; i < ac; i++) {
        nb_digits = 0;
        nb_minus = 0;
        nb_dots = 0;
        for (int j = 0; av[i][j] != '\0'; j++) {
            nb_digits += (av[i][j] >= '0' && av[i][j] <= '9') ? 1 : 0;
            nb_minus += (av[i][j] == '-') ? 1 : 0;
            nb_dots += (av[i][j] == '.') ? 1 : 0;
        }
        if (nb_dots > 1 || nb_minus > 1 || nb_digits + nb_minus + nb_dots !=
            strlen(av[i]))
            return (84);
    }
    return (0);
}