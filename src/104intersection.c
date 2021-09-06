/*
** EPITECH PROJECT, 2021
** 104intersection.c
** File description:
** ctran
*/

#include "intersection.h"

void special_cases(char **av, double b, double c)
{
    double t = 0;

    if (b == 0 && c != 0)
        printf("No intersection point.\n");
    if (b != 0)
    {
        printf("1 intersection point:\n");
        t = c / b;
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + t * atof(av[5]),
               atof(av[3]) + t * atof(av[6]), atof(av[4]) + t * atof(av[7]));
    }
    if (my_getnbr(av[1]) != 1 && b == 0 && c == 0)
        printf("There is an infinite number of intersection points.\n");
}

void delta_act(char **av, double delta, double a, double b)
{
    double t = 0;

    if (delta < 0)
        printf("No intersection point.\n");
    if (delta == 0)
    {
        printf("1 intersection point:\n");
        t = -b / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + t * atof(av[5]),
               atof(av[3]) + t * atof(av[6]), atof(av[4]) + t * atof(av[7]));
    }
    if (delta > 0)
    {
        printf("2 intersection points:\n");
        t = (-b + sqrt(delta)) / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + t * atof(av[5]),
               atof(av[3]) + t * atof(av[6]), atof(av[4]) + t * atof(av[7]));
        t = (-b - sqrt(delta)) / (2 * a);
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + t * atof(av[5]),
               atof(av[3]) + t * atof(av[6]), atof(av[4]) + t * atof(av[7]));
    }
}

int intersection(char **av)
{
    if (my_getnbr(av[1]) == 1 && atof(av[8]) > 0)
    {
        printf("Sphere of radius %s\n", av[8]);
        return (sphere(av));
    }
    if (my_getnbr(av[1]) == 2 && atof(av[8]) > 0)
    {
        printf("Cylinder of radius %s\n", av[8]);
        return (cylinder(av));
    }
    if (my_getnbr(av[1]) == 3 && atof(av[8]) > 0 && atof(av[8]) < 90)
    {
        printf("Cone with a %s degree angle\n", av[8]);
        return (cone(av));
    }
    return (84);
}
