/*
** EPITECH PROJECT, 2021
** intersection
** File description:
** intersection.h
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "my.h"

#ifndef INTERSECTION_H_
#define INTERSECTION_H_

typedef struct coordinates
{
    double x;
    double y;
    double z;
}coord;

void special_cases(char **av, double b, double c);
void delta_act(char **av, double delta, double a, double b);
int intersection(char **av);
int sphere(char **av);
int cylinder(char **av);
int cone(char **av);
int man(void);

#endif
