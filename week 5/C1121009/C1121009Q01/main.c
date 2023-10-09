#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Given a very large positive integer, write a program to determine if it is a multiple of eleven.
The input is a line of a positive number. The given number can contain up to 1000 digits.
The output of the program shall indicate, for an input number, if it is a multiple of eleven or not.

Example Input 1:
112233

Example Input 2:
123456789

Example Output 1:
112233 is a multiple of 11.

Example Output 2:
123456789 is not a multiple of 11.
*/
int main()
{
	char str[1001];

	scanf("%s", &str);

	int odd = 0, even = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (i % 2) odd += (str[i] - '0');
		else even += (str[i] - '0');
	}

	if ((even - odd) % 11 == 0 || even - odd == 0)
		printf("%s is a multiple of 11.", str);
	else 
		printf("%s is not a multiple of 11.", str);

	return 0;
}