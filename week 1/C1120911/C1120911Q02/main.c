#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
/*
Enter two numbers. The input should be like:
1.	Enter a number.
2.	Then enter another number.

Print out the whole result to second decimal place with spaces between two numbers and the arithmetic operators. For example:
1.00 + 1.00 = 2.00
1.00 - 1.00 = 0.00
1.00 * 1.00 = 1.00
1.00 / 1.00 = 1.00
*/

/*
1
1

1.00 + 1.00 = 2.00
1.00 - 1.00 = 0.00
1.00 * 1.00 = 1.00
1.00 / 1.00 = 1.00
*/
int main()
{
	float a = 0, b = 0, c = 0;
	scanf("%f%f", &a, &b);
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	return 0;
}