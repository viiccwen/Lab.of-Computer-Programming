﻿#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

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