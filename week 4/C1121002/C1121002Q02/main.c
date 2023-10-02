﻿#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
Encoding is the process of transforming information from one format into another. There exist several different types of encoding scheme. In this problem we will talk about a very simple encoding technique; Run-Length Encoding.
Run-length encoding is a very simple and easy form of data compression in which consecutive occurrences of the same characters are replaced by a single character followed by its frequency. As an example, the string 'AABBBBDAA' would be encoded to 'A2B4D1A2', quotes for clarity.
In this problem, we are interested in decoding strings that were encoded using the above procedure.

The first line of input is an integer T (T<50) that indicates the number of test cases. Each case is a line consisting of an encoded string. The string will contain only digits [0-9] and letters [A-Z]. Every inputted string will be valid. That is, every letter will be followed by 1 or more digits.
For each case, output the case number followed by the decoded string. Adhere to the sample for exact format.
You may assume the decoded string wont have a length greater than 200 and it will only consist of upper case alphabets.

input:
3
A2B4D1A2
A12
A1B1C1D1
output:
Case 1: AABBBBDAA
Case 2: AAAAAAAAAAAA
Case 3: ABCD
*/

int main()
{
    int n;
    scanf("%d\n", &n);

    for (int t = 1; t <= n; t++) {
        char encoded[201];
        fgets(encoded, sizeof(encoded), stdin);

        printf("Case %d: ", t);

        int i = 0;
        char pre = '0', cur = '0';
        int cnt;
        while (encoded[i] != '\n') {
            cnt = 0;

            while (isupper(encoded[i])) {
                cur = encoded[i];
                i++;
            }

            while (isdigit(encoded[i])) {
                cnt = cnt * 10 + (encoded[i] - '0');
                i++;
            }

            for (int j = 0; j < cnt; j++) {
                printf("%c", cur);
            }
        }

        printf("\n");
    }
	return 0;
}