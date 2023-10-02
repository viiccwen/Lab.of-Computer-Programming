#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
The input will be a sentence contains several words, but without any punctuations.
The output should show the each word line by line and another line with the number of words at the end.

input:
Hello world
output:
Hello
world
2
*/

int main()
{
    char sentence[1000];
    int wordCount = 0;

    fgets(sentence, sizeof(sentence), stdin);

    char* word = strtok(sentence, " ");

    while (word != NULL) {
        printf("%s", word);
        wordCount++;
        word = strtok(NULL, " ");
        if(word != NULL) printf("\n");
    }

    printf("%d", wordCount);
	return 0;
}