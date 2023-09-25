#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

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