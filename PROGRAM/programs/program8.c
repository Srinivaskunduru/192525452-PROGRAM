#include <stdio.h>

int main() {
    int a[100], n, i;
    int search, position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("Element not found.");
    } else {
        printf("Element found at position %d.", position + 1);
    }

    return 0;
}