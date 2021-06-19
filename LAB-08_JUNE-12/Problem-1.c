#include<stdio.h>
#include<limits.h>

void smallestEven(int arr[], int size)
{
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min && arr[i]%2==0){
            min = arr[i];
        }
    }

    printf("Smallest Even Number is: %d\n",min);
}

void largestOdd(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max && arr[i]%2!=0){
            max = arr[i];
        }
    }

    printf("Largest Odd Number is: %d\n",max);
}

int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the value: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    smallestEven(arr,n);
    largestOdd(arr,n);
    return 0;
}