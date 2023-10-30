// Do not modify this file, everything will be replaced during the judge process.
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

// The function implementations are in this header.
#include "func.h"

/*
Write a program to read the arithmetic expression and perform one of the following arithmetic operations: (1) Addition, (2) Subtraction, (3) Multiplication and (4) Division.
No inputs are required for this problem, see 'main.c' for detail.
Finish implementing the functions in 'func.h' and output the arithmetic expression and the result of the calculation with all floating numbers rounding to two decimal places. Adhere to the sample for exact format.
6.00+9.00=15.00

float x = 6;
float y = 9;
char op = '+';

output:
6.00+9.00=15.00
*/

int main()
{
    // You may modify these variables for testing.
    float x = 6.00f;
    float y = 9.00f;
    char op = '-';

    float result;
    switch (op)
    {
    case '+':
        result = add(x, y);
        break;
    case '-':
        result = subtract(x, y);
        break;
    case '*':
        result = multiply(x, y);
        break;
    case '/':
        result = divide(x, y);
        break;
    default:
        break;
    }
    // Show the result
    print_result(x, y, op, result);


    return 0;
}