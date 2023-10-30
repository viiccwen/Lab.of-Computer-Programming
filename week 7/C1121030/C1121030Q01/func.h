#pragma once
#include <stdio.h>

// Implement the following functions.

float add(float a, float b)
{
	return a + b;
}

float subtract(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}

void print_result(float x,float  y,char op,float  result)
{
	printf("%.2f%c%.2f=%.2f", x, op, y, result);
}
