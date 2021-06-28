#include <stdio.h>

int sum(int *ptr, int n){
    int sum =0;
        for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr+i);
    }
    return sum;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The sum is: %d\n", sum(arr,n));
}