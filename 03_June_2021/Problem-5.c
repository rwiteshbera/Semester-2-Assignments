#include <stdio.h>

void Merge(int arr1[], int arr2[], int m, int n)
{
    int arr3[m + n];
    int i = 0, j=0, x=0;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[x++] = arr1[i++];
        }
        else
        {
            arr3[x++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[x++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[x++] = arr2[j++];
    }

    for (int k = 0; k < (m + n); k++)
    {
        printf("%d ", arr3[k]);
    }
    printf("\n");
}

int main()
{
    int arr1[3] = {4, 7, 9};
    int arr2[6] = {1, 2, 3, 5, 6, 8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    Merge(arr1, arr2, n1, n2);

    return 0;
}