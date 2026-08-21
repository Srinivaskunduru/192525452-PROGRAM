#include <stdio.h>

int main() {
    int a[100], n, i;
    int choice, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    do {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);

                printf("Enter the position: ");
                scanf("%d", &position);

                if (position < 1 || position > n + 1) {
                    printf("Invalid position.\n");
                } else {
                    for (i = n; i >= position; i--) {
                        a[i] = a[i - 1];
                    }

                    a[position - 1] = element;
                    n++;

                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &position);

                if (position < 1 || position > n) {
                    printf("Invalid position.\n");
                } else {
                    for (i = position - 1; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }

                    n--;

                    printf("Element deleted successfully.\n");
                }
                break;

            case 3:
                printf("Array elements:\n");

                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }

                printf("\n");
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