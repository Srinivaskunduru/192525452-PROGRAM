#include <stdio.h>

#define SIZE 10

int main() {
    int hashTable[SIZE];
    int n, key, index, start;
    int i, inserted;

    for (i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > SIZE) {
        printf("Only %d elements can be inserted.\n", SIZE);
        return 0;
    }

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &key);

        index = key % SIZE;
        start = index;
        inserted = 0;

        do {
            if (hashTable[index] == -1) {
                hashTable[index] = key;
                inserted = 1;
                break;
            }

            index = (index + 1) % SIZE;

        } while (index != start);

        if (!inserted) {
            printf("Hash table is full.\n");
            break;
        }
    }

    printf("\nHash Table:\n");
    printf("Index\tValue\n");

    for (i = 0; i < SIZE; i++) {
        if (hashTable[i] == -1) {
            printf("%d\tEmpty\n", i);
        } else {
            printf("%d\t%d\n", i, hashTable[i]);
        }
    }

    return 0;
}