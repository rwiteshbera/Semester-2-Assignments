#include <stdio.h>

int LinearSearch(int arr[], int n, int element){
    for(int i=0; i<n; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int element;

    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element: ");
    scanf("%d", &element);

    int res = LinearSearch(arr, n, element);

    if (res==-1)
    {
        printf("Element is not present in the array.\n");
    }
    else{
        printf("Element is present in the array.\n");
    }
    
    return 0;
}