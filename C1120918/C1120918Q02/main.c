#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
/*
The user input should be:
1.	Two floating numbers separated by a space as the first vector.
2.	<Enter> or New Line.
3.	Another two floating numbers separated by a space as the second vector.
4.	<Enter> or New Line.

The output should show the results of (1) addition, (2) subtraction and (3) dot product to the second decimal place in separated lines.

*/

/*
2.55 1.58
4.62 0.98

7.17 2.56
-2.07 0.60
13.33
*/
int main()
{
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("%.2f %.2f\n", a + c, b + d);
	printf("%.2f %.2f\n", a - c, b - d);
	printf("%.2f", a * c + b * d);
	return 0;
}