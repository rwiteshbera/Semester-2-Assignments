#include<stdio.h>

void Armstrong(int n)
{
    int temp = n;
    int currentValue = 0;
    while (temp!=0)
    {
       int lastDigit = temp%10;
       currentValue += (lastDigit*lastDigit*lastDigit);
       temp/=10;
    }

    if (currentValue==n)
    {
            printf("Armstrong Number.\n");
    }
    else
    {
        printf("Not an armstrong number.\n");
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    Armstrong(n);

    return 0;
}