#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

/*
The input contains only one integer N represents the number of layers in the pyramid, where 1 ≤ N ≤ 26.

Show a pyramid with each layer consists of same English alphabets depends on which layer it is belong to. For example, layer 1 consists of only A, layer 2 consists of  only B, layer 3 consists of only C and so on. As a result, if N=3 then the output should be:
  A
 BBB
CCCCC
*/

/*
3

  A
 BBB
CCCCC
*/

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++) printf(" ");
		for (int k = 1; k <= i * 2 - 1; k++) printf("%c", 64 + i);
		printf("\n");
	}
	return 0;
}
