#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
/*
Write a program to read a sequence of integer numbers and found out the repeated numbers and show the result sorted in ascending order.
The first line of input is an integer N (N <= 100) that indicates the size of the sequence. Then, the next line will be followed by a sequence of integers separated by spaces.
The output should show the repeated integer numbers in ascending order. If no repeated numbers were found, show message 'No repeated numbers!' instead.

input:
10
10 15 23 15 55 78 55 15 55 1112

output:
15 55
*/

void Swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void solve() {
	int N;
	int arr[101] = { 0 };
	int repeat[101] = { 0 };
	int ite = -1;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++)
			if (arr[i] > arr[j]) Swap(&arr[i], &arr[j]);
	}

	int pre = arr[0];
	for (int i = 1; i < N; i++) {
		if (pre == arr[i] && ite == -1) {
			ite = 0;
			repeat[ite] = arr[i];
		}
		else if (pre == arr[i] && ite != -1 && pre != repeat[ite]) {
			ite++;
			repeat[ite] = arr[i];
		}
		else if (pre != arr[i]) pre = arr[i];
	}

	if (ite == -1) {
		printf("No repeated numbers!");
		return;
	}

	for (int i = 0; i <= ite; i++) {
		printf("%d", repeat[i]);
		if (i != ite) printf(" ");
	}
}

int main(){
	solve();
	return 0;
}