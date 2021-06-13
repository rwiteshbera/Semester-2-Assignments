#include <stdio.h>
#include<stdbool.h>

int getFactorial(int num)
{
    if (num == 0)
        return 1;
    return num * getFactorial(num - 1);
}

void checkFactorial(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0)
        {
            printf("Factorial of %d is not found.\n",arr[i]);
        }
        else{
            int fact = getFactorial(arr[i]);
            bool b = false;
            for(int j=0; j<size; j++)
            {
                if(arr[j]==fact){
                    printf("Factorial of %d is %d which is present.\n",arr[i],fact);
                    b = true;
                }
            }
            if (b==false)
            {
                printf("Factorial of %d is not found.\n",arr[i]);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the value: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    checkFactorial(arr, n);
    return 0;
}