#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

/*
The user input would be:
1.	A floating number as the first operand.
2.	A single character as the operator.
3.	Another floating number as the second operand.
The following arithmetic expression shows an example of operands and operators:
6+9
In the above example, "6" and "9" are the operands and the "+" symbol is the addition operator.


The output should show the arithmetic expression and the result of the calculation with each floating rounding to two decimal places.
6.00+9.00=15.00
*/

/*
6+9
6.00+9.00=15.00
*/

int main() {
	float a = 0, b = 0, c = 0;
	char op;
	scanf("%f%c%f", &a, &op, &b);
	if (op == '+') c = a + b;
	else if (op == '-') c = a - b;
	else if (op == '*') c = a * b;
	else if (op == '/') c = a / b;
	printf("%.2f%c%.2f=%.2f", a, op, b, c);
	return 0;
}