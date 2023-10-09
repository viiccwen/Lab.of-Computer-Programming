#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
There is an objective test result such as "OOXXOXXOOO". An 'O' means a correct answer of a problem and an 'X' means a wrong answer. The score of each problem of this test is calculated by itself and its just previous consecutive 'O's only when the answer is correct. For example, the score of the 10th problem is 3 that is obtained by itself and its two previous consecutive 'O's. Therefore, the score of "OOXXOXXOOO" is 10 which is calculated by "1+2+0+0+1+0+0+1+2+3". You are to write a program calculating the scores of test results.
Your program is to read from standard input. The input consists of T test cases. The number of test cases T is given in the first line of the input. Each test case starts with a line containing a string composed by 'O' and 'X' and the length of the string is more than 0 and less than 80. There is no spaces between 'O' and 'X'.
Your program is to write to standard output. Print exactly one line for each test case. The line is to contain the score of the test case.

input:
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX

output:
10
9
7
55
30
*/

int main()
{
	int n;
	char str[81];

	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		fgets(str, sizeof(str), stdin);
		int cnt = 0;

		for (int j = 0; j < strlen(str); j++) {
			int cur = 0;
			
			while (str[j] == 'O') {
				cnt += (++cur);
				j++;
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}