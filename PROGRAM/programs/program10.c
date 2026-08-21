#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *newNode, *temp;
    int choice, value;

    do {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                newNode = (struct Node *)malloc(sizeof(struct Node));

                if (newNode == NULL) {
                    printf("Memory allocation failed.\n");
                    return 1;
                }

                printf("Enter the value: ");
                scanf("%d", &value);

                newNode->data = value;
                newNode->next = NULL;

                if (head == NULL) {
                    head = newNode;
                } else {
                    temp = head;

                    while (temp->next != NULL) {
                        temp = temp->next;
                    }

                    temp->next = newNode;
                }

                printf("Node inserted successfully.\n");
                break;

            case 2:
                if (head == NULL) {
                    printf("Linked list is empty.\n");
                } else {
                    temp = head;
                    head = head->next;

                    printf("Deleted element: %d\n", temp->data);
                    free(temp);
                }
                break;

            case 3:
                if (head == NULL) {
                    printf("Linked list is empty.\n");
                } else {
                    temp = head;

                    printf("Linked list elements:\n");

                    while (temp != NULL) {
                        printf("%d -> ", temp->data);
                        temp = temp->next;
                    }

                    printf("NULL\n");
                }
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}