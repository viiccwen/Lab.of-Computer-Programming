#pragma once
#include <stdio.h>

// Implement the following functions.

void parse(char *cases, float *v1, float *v2)
{

    sscanf(cases, "(%f,%f),(%f,%f)", &v1[0], &v1[1], &v2[0], &v2[1]);
}

void calc_print(int i, float *v1, float *v2)
{
    printf("Case %d:\n", i+1);
    printf("  Addition: (%.2f,%.2f)\n", v1[0] + v2[0], v1[1] + v2[1]);
    printf("  Subtraction: (%.2f,%.2f)\n", v1[0] -v2[0], v1[1] - v2[1]);
    printf("  Dot: %.2f\n", v1[0] * v2[0]+ v1[1] * v2[1]);
}

/*
Case 1:
  Addition: (2.50,2.50)
  Subtraction: (-0.50,-0.50)
  Dot: 3.00
*/