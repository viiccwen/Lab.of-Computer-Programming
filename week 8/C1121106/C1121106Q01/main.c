#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
/*
Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list.
Now, with given several integer numbers, write a program to rearrange them in ascending order by using bubble sort.

The first line of input is an integer N (N <= 100) that indicates the size of the sequence. Then, the next line will be followed by a sequence of integers separated by spaces.
The output should show the sorted integer sequence.

input:
5
22 37 19 11 38

output:
11 19 22 37 38
*/

void Swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int N;
	scanf("%d", &N);

	int arr[101];
	for (int i = 0; i < N; i++) 
		scanf("%d", &arr[i]);
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] > arr[j]) Swap(&arr[i], &arr[j]);
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d", arr[i]);
		if (i != N - 1) printf(" ");
	}
	return 0;
}