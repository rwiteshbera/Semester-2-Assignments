#include <stdio.h>

int LinearSearch(int arr[], int key, int index, int n)
{
    int pos = 0;
    if (index >= n)
    {
        return 0;
    }
    else if (arr[index] == key)
    {
        pos = index+1;
    }
    else
    {
        return LinearSearch(arr, key, index + 1, n);
    }
    return pos;
}

int main()
{
    int size, key;
    printf("Ente the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int position = LinearSearch(arr, key, 0, size);

    if (position != 0)
    {
        printf("%d is found at index %d\n", key, position-1);
    }
    else
    {
        printf("Element is not found.\n");
    }
    return 0;
}