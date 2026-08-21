#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value) {
    stack[++top] = value;
}

char pop() {
    return stack[top--];
}

int precedence(char operator) {
    if (operator == '^') {
        return 3;
    }

    if (operator == '*' || operator == '/') {
        return 2;
    }

    if (operator == '+' || operator == '-') {
        return 1;
    }

    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    char symbol;
    int i, j = 0;

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    for (i = 0; i < strlen(infix); i++) {
        symbol = infix[i];

        if (isalnum(symbol)) {
            postfix[j++] = symbol;
        } else if (symbol == '(') {
            push(symbol);
        } else if (symbol == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }

            if (top != -1) {
                pop();
            }
        } else {
            while (top != -1 &&
                   stack[top] != '(' &&
                   precedence(stack[top]) >= precedence(symbol)) {
                postfix[j++] = pop();
            }

            push(symbol);
        }
    }

    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}