#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Caesar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. (If the replacement would go past the letter Z, the cipher "wraps around" to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, then Y would be replaced by A, and Z would be replaced by B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted).
The input will consist of two lines; first line is the message to be encrypted. You may assume that the message does not exceed 100 characters. Second line is the shift amount (an integer) used in Caesar cipher.
Print encrypted message. Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, and upper-case letters remain upper-case.

input:
Hello world!
4

output:
Lipps asvph!
*/

int main()
{
	char str[101];
	int n;

	fgets(str, sizeof(str), stdin);
	scanf("%d", &n);

	while (n < 0) n += 26; // negative integer
	n %= 26;

	for (int i = 0; i < strlen(str); i++) {
		if (isupper(str[i])) {
			int idx = (str[i] - 65 + n) % 26;
			
			printf("%c", idx + 65);
		}
		else if (islower(str[i])) {
			int idx = (str[i] - 97 + n) % 26;

			printf("%c", idx + 97);
		}
		else printf("%c", str[i]);
	}
}