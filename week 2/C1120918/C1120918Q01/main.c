#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>

/*
The user input should be:
1.	Two floating numbers separated by a space as the input vector.
2.	<Enter> or New Line.

The output should show the results of (1) length and (2) unit vector to the second decimal place in separated lines.

*/

/*
2.55 1.58

3.00
0.85 0.53
*/

int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	float c = sqrt(pow(a, 2) + pow(b, 2));
	printf("%.2f\n", c);
	printf("%.2f %.2f", a/c, b/c);
	return 0;
}