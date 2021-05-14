#include<stdio.h>

void Perfect(int n)
{
    int temp = n;
    int i = 1;
    int sum = 0;
    int mult = 1;
    while (i<temp)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        i++;
    }

int j = 1;
        while (j<=temp)
    {
        if (n%j==0)
        {
            mult*=j;
        }
        j++;
    }

    if (n==sum)
    {
       printf("%d is a Perfect Number\n",n);
    }
    if((n*n)==mult)
    {
        printf("%d is a Multiplicative perfect number.\n",n);
    }
    else
    {
        printf("%d is a not a perfect number.\n",n);
    } 
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    Perfect(n);

    return 0;
}
