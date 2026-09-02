#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0, total;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements from 1 to %d with one missing:\n", n + 1);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = (n + 1) * (n + 2) / 2;

    printf("Missing element = %d", total - sum);

    return 0;
}