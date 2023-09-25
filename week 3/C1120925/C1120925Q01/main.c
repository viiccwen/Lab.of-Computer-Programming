#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	float a = 0, b = 0, c = 0;
	char op;
	scanf("%f%c%f", &a, &op, &b);
	if (op == '+') c = a + b;
	else if (op == '-') c = a - b;
	else if (op == '*') c = a * b;
	else if (op == '/') c = a / b;
	printf("%.2f%c%.2f=%.2f", a, op, b, c);
	return 0;
}