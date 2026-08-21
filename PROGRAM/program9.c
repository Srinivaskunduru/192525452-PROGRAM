#include <stdio.h>

int main() {
    int a[100], n, i;
    int search, low, high, middle;
    int position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        middle = (low + high) / 2;

        if (a[middle] == search) {
            position = middle;
            break;
        } else if (search < a[middle]) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }

    if (position == -1) {
        printf("Element not found.");
    } else {
        printf("Element found at position %d.", position + 1);
    }

    return 0;
}