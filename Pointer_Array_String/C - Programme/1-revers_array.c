#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter the elements of arrays: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int x = 4; x >= 0; x--)
    {
        printf("%d\n", a[x]);
    }
    return 0;
}