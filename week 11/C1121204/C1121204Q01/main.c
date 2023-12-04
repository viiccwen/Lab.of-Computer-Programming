#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Write a program to replace string in the given input with another string.
The string to be replaced in the input string may appear multiple times.
The input will consist of three lines of string; first line is the original string. Second line is the string segment needs to be replaced in the original string. Third line is the new string used to replace the matched string segments in the original string.
The length of all input strings will not exceed 50.
The length of the new string after replacement will not exceed 100.
Print the new string after replacing the specific string in the original string with given string.

input :
Hello World!
World
C Programming

output :
Hello C Programming!
*/

bool isTarget(char* str, char* target) {
    for (int i = 0; i < strlen(target); i++) 
        if (*(str + i) != target[i]) return false;

    return true;
}

int main()
{
    char str[51], target[51], replace[51];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    fgets(target, sizeof(target), stdin);
    target[strlen(target) - 1] = '\0';
    fgets(replace, sizeof(replace), stdin);
    replace[strlen(replace) - 1] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target[0]) {
            if (isTarget(&str[i], &target)) {
                printf("%s", replace);
                i += strlen(target) - 1;
            }
            else printf("%c", str[i]);
        }
        else printf("%c", str[i]);
    }

    return 0;
}