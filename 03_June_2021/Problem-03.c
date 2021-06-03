#include <stdio.h>

int main()
{
    int n;
    int EvenSum = 0, OddSum = 0;
    
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            EvenSum += arr[i];
        }
        else if (arr[i] % 2 == 1)
        {
            OddSum += arr[i];
        }
    }

    printf("Sum of Even Number: %d\n", EvenSum);
    printf("Sum of Odd Number: %d\n", OddSum);
    printf("Difference between Sum of even and odd: %d\n", (EvenSum - OddSum));

    return 0;
}