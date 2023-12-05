#include <stdio.h>
#include <stdlib.h>
/*
read two integer in the file and write the sum to the output file
the input file(input.txt) only contents two integer number
output the sum of the inputs to the output(output.txt) file in integer

in the file input.txt
1
1

output file output.txt
2
*/

int main(){
	FILE* input;
	FILE* output;
	fopen_s(&input, "input.txt", "r");
	fopen_s(&output, "output.txt", "w");
	
	int a, b;
	fscanf_s(input, "%d\n", &a);
	fscanf_s(input, "%d\n", &b);
	
	fprintf(output, "%d", a+b);
	
	fclose(input);
	fclose(output);
	return 0;
}