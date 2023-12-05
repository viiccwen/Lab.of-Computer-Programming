#include <stdio.h>
/*
* Write a program to calculate the addition of 2 2x2 matrices, and show the result 2x2 matrix.

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
8 16
11 17
*/
int main()
{
	int mat[2][4];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &mat[i][j]);
		}
	}

	printf("%d %d\n%d %d", mat[0][0] + mat[1][0], mat[0][1] + mat[1][1], mat[0][2] + mat[1][2], mat[0][3] + mat[1][3]);
	return 0;
}