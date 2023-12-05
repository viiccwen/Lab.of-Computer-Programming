#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include "func.h"

/*
All inputs have been given and defined by known variables in main.c. The first variable T is an integer, where T < 50, that indicates the number of test cases. All test cases are stored in a 2D string array with each string consisting of two 2D vectors and are represented as "(a,b),(c,d)" without any space between the parentheses or commas. You'll need to complete both parse and calc_print functions in func.h. For function parse, extract the vector values from string into floating numbers. And for function calc_print, calculate and show the results.
For each case, output the case number in one line and followed by each result (addition, subtraction and dot product) in separated lines. Adhere to the sample for exact format. Each floating number in the results should be rounding to two decimal places.

// Input cases
int T = 2;

// Test cases
char* cases[] = {
    "(1.00,1.00),(1.50,1.50)",
    "(2.20,2.20),(2.30,2.30)"
};


output:
Case 1:
  Addition: (2.50,2.50)
  Subtraction: (-0.50,-0.50)
  Dot: 3.00
Case 2:
  Addition: (4.50,4.50)
  Subtraction: (-0.10,-0.10)
  Dot: 10.12
*/
int main()
{
    // Input cases
    int T = 2;

    // Test cases
    char* cases[] = {
        "(1.00,1.00),(1.50,1.50)", // (a,b),(c,d)
        "(2.20,2.20),(2.30,2.30)"
    };

    // Vector values
    float v1[2];
    float v2[2];

    // Loop through each case
    for (int i = 0; i < T; ++i)
    {
        // Parse vectors from string
        parse(cases[i], v1, v2);

        // Calculate the vector properties and show the result
        calc_print(i, v1, v2);
    }

    return 0;
}
