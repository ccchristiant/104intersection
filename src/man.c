/*
** EPITECH PROJECT, 2021
** man.c
** File description:
** ctran
*/

#include <stdio.h>

int man(void)
{
    printf("USAGE\n\t./104intersection opt xp yp zp xv yv zv p\n\nDESCRIPTION\n\t");
    printf("opt\t\tsurface option: 1 for a sphere, 2 for a cylinder, 3 for ");
    printf("a cone\n\t(xp, yp, zp)\tcoordinates of a point by which the ");
    printf("light ray passes through\n\t(xv, yv, zv)\tcoordinates of a ");
    printf("vector parallel to the light ray\n\tp\t\tparameter: radius of ");
    printf("the sphere, radius of the cylinder, or\n\t\t\tangle formed by ");
    printf("the cone and the Z-axis\n");
    return (0);
}
