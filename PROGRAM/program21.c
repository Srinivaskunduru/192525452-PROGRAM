#include <stdio.h>
#include <string.h>

int main()
{
    char haystack[100], needle[50];

    printf("Enter haystack: ");
    scanf("%s", haystack);

    printf("Enter word to search: ");
    scanf("%s", needle);

    if(strstr(haystack, needle) != NULL)
        printf("Word found");
    else
        printf("Word not found");

    return 0;
}