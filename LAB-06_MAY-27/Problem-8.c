#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Printing the array before reverse
    printf("Printing the array before reverse.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int i = 0, j = n - 1;
    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    //Printing the array after reverse
    printf("\nPrinting the array after reverse.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    //Sum of even number
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }

    printf("\nSum of even numbers: %d\n", sum);

    return 0;
}