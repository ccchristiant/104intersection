/*
** EPITECH PROJECT, 2021
** sphere.c
** File description:
** sphere case
*/

#include "intersection.h"

int sphere(char **av)
{
    double a = powf(atof(av[5]), 2) + powf(atof(av[6]), 2) +
        powf(atof(av[7]), 2);
    double b = 2 * (atof(av[2]) * atof(av[5]) + atof(av[3]) * atof(av[6]) +
                    atof(av[4]) * atof(av[7]));
    double c = powf(atof(av[2]), 2) + powf(atof(av[3]), 2) +
        powf(atof(av[4]), 2) - powf(atof(av[8]), 2);
    double delta = powf(b, 2) - 4 * a * c;

    printf("Line passing through the point (%s, %s, %s)", av[2], av[3], av[4]);
    printf(" and parallel to the vector (%s, %s, %s)\n", av[5], av[6], av[7]);
    if (a == 0)
        special_cases(av, b, c);
    else
        delta_act(av, delta, a, b);
    return 0;
}

int cylinder(char **av)
{
    double a = powf(atof(av[5]), 2) + powf(atof(av[6]), 2);
    double b = 2 * (atof(av[2]) * atof(av[5]) + atof(av[3]) * atof(av[6]));
    double c = powf(atof(av[2]), 2) + powf(atof(av[3]), 2) - powf(atof(av[8]), 2);
    double delta = powf(b, 2) - 4 * a * c;

    printf("Line passing through the point (%s, %s, %s)", av[2], av[3], av[4]);
    printf(" and parallel to the vector (%s, %s, %s)\n", av[5], av[6], av[7]);
    if (a == 0)
        special_cases(av, b, c);
    else
        delta_act(av, delta, a, b);
    return 0;
}

int cone(char **av)
{
    double a = powf(atof(av[5]), 2) + powf(atof(av[6]), 2) -
        (powf(tan(atof(av[8]) * M_PI / 180), 2) * powf(atof(av[7]), 2));
    double b = 2 * (atof(av[2]) * atof(av[5]) + atof(av[3]) *
                    atof(av[6]) - (powf(tan(atof(av[8]) * M_PI / 180), 2) *
                                   atof(av[4]) * atof(av[7])));
    double c = powf(atof(av[2]), 2) + powf(atof(av[3]), 2) -
        (powf(tan(atof(av[8]) * M_PI / 180), 2) * pow(atof(av[4]), 2));
    double delta = powf(b, 2) - 4 * a * c;

    printf("Line passing through the point (%s, %s, %s)", av[2], av[3], av[4]);
    printf(" and parallel to the vector (%s, %s, %s)\n", av[5], av[6], av[7]);
    if (a == 0)
        special_cases(av, b, c);
    else
        delta_act(av, delta, a, b);
    return 0;
}
