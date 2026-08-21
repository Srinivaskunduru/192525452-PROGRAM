#include <stdio.h>

int main() {
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Even Numbers:\n");

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd Numbers:\n");

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}