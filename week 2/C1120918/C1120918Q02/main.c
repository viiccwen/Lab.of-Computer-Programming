#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("%.2f %.2f\n", a + c, b + d);
	printf("%.2f %.2f\n", a - c, b - d);
	printf("%.2f", a * c + b * d);
	return 0;
}