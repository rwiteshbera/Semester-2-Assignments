#include <stdio.h>

int main()
{
    int n, var = 0;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter the value: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before removing duplicates:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < var; j++)
        {
            if (arr[i] == temp[j])
            {
                break;
            }
        }
        if (j == var)
        {
            temp[var] = arr[i];
            var++;
        }
    }

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < var; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}