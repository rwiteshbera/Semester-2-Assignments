#include <stdio.h>

int main()
{
    int n, num;

    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number from the array: ");
    scanf("%d", &num);

    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == num)
        {
            count++;
        }
    }

    printf("Number of occurrences of %d is: %d\n", num, count);

    return 0;
}