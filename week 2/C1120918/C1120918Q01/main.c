#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	float c = sqrt(pow(a, 2) + pow(b, 2));
	printf("%.2f\n", c);
	printf("%.2f %.2f", a/c, b/c);
	return 0;
}