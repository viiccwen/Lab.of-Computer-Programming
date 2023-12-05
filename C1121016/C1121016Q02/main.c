#include <stdio.h>
/*
* Write a program to calculate the multiplication of 2 2x2 matrices, and show the result 2x2 matrix.
The user inputs should be:
1.	Input 4 integer numbers separated by space as the first matrix.
2.	<ENTER>
3.	Input 4 integer numbers separated by space as the second matrix.
4.	<ENTER>
The following numbers
1 2 3 4

The output should show the addition result in 2x2 format.

input:
5 8 3 8
3 8 8 9

output:
79 112
73 96


*/
int main()
{
	int mat1[4], mat2[4];
	int mat3[4];

	for (int i = 0; i < 4; i++) scanf_s("%d", &mat1[i]);
	for (int i = 0; i < 4; i++) scanf_s("%d", &mat2[i]);
	
	mat3[0] = mat1[0] * mat2[0] + mat1[1] * mat2[2];
	mat3[1] = mat1[0] * mat2[1] + mat1[1] * mat2[3];
	mat3[2] = mat1[2] * mat2[0] + mat1[3] * mat2[2];
	mat3[3] = mat1[2] * mat2[1] + mat1[3] * mat2[3];

	printf("%d %d\n%d %d", mat3[0], mat3[1], mat3[2], mat3[3]);
	
	return 0;
}

// 0 = 0 * 0 + 1 * 2
// 1 = 0 * 1 + 1 * 3
// 2 = 2 * 0 + 3 * 2
// 3 = 2 * 1 + 3 * 3