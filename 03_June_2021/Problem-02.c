#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int start = 0, end = 4;

    printf("Before Reverse: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\nAfter Reverse: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}