#include <stdio.h>

#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int choice, value, i;

    do {
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == MAX - 1) {
                    printf("Stack Overflow\n");
                } else {
                    printf("Enter the value: ");
                    scanf("%d", &value);

                    top++;
                    stack[top] = value;

                    printf("Element pushed successfully.\n");
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack Underflow\n");
                } else {
                    printf("Popped element: %d\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Top element: %d\n", stack[top]);
                }
                break;

            case 4:
                if (top == -1) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack elements:\n");

                    for (i = top; i >= 0; i--) {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 5:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}