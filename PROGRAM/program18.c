#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if(n >= 5)
        printf("5th element = %d", a[4]);
    else
        printf("Less than 5 elements");

    return 0;
}