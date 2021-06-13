#include<stdio.h>

int main(){
     int n, var = 0;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter the value: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}