#include<stdio.h>

int main()
{
    int x = 99999;
    int n;
    int arr[5] = {1,2,3,4,5};

    //Printing the array
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Taking user input of position
    printf("Enter the index: ");
    scanf("%d",&n);

    //Shifting the array elements
    for(int j=5; j>=n-1; j--)
    {
        arr[j] = arr[j-1];
    }

    arr[n-1] = x;

    //Printing the final array
    for(int k=0; k<6; k++)
    {
        printf("%d ",arr[k]);
    }

    return 0;
}