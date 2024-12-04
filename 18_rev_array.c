#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5], revArr[5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        revArr[i] = arr[j];
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", revArr[i]);
    }
    return 0;
}