#include <stdio.h>

#define MAX 100

int main() {
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value, i;

    do {
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == MAX - 1) {
                    printf("Queue Overflow\n");
                } else {
                    printf("Enter the value: ");
                    scanf("%d", &value);

                    if (front == -1) {
                        front = 0;
                    }

                    rear++;
                    queue[rear] = value;

                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
                if (front == -1 || front > rear) {
                    printf("Queue Underflow\n");
                } else {
                    printf("Deleted element: %d\n", queue[front]);
                    front++;

                    if (front > rear) {
                        front = -1;
                        rear = -1;
                    }
                }
                break;

            case 3:
                if (front == -1) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue elements:\n");

                    for (i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }

                    printf("\n");
                }
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}