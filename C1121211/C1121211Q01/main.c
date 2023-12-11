#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Infix and postfix are traversal methods commonly used in compilers and calculators.
For example, a single expression can be written in each form
Infix: ((1+2)*3)/4+5
Postfix: 12+3*4/5+
The advantage of postfix expression is that parentheses are unnecessary to prevent ambiguity.
In our traversal the following symbols are operators with precedence rules going from highest to lowest:

input:
((1+2)*3)/4+5

output:
12+3*4/5+
*/

int TOP = -1;
char stk[1000];

void push(char num) {
    stk[++TOP] = num;
}

void pop() {
    TOP--;
}

int top() {
    return stk[TOP];
}

int precedence(char c) {
    return (c == '/' || c == '*') ? 2 : (c == '+' || c== '-') ? 1 : 0;
}

int main()
{
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (isalnum(str[i])) {
            printf("%c", str[i]);
        }
        else if (str[i] == '(') {
            push('(');
        }
        else if (str[i] == ')') {
            while (TOP >= 0 && stk[TOP] != '(') {
                printf("%c", stk[TOP]);
                pop();
            }
            pop();
        }
        else {
            while (TOP >= 0 && precedence(str[i]) <= precedence(top())) {
                printf("%c", stk[TOP]);
                pop();
            }
            push(str[i]);
        }
    }

    while (TOP >= 0) {
        printf("%c", stk[TOP]);
        pop();
    }
}