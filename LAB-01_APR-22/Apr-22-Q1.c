//Write a C Program to add and multiply three numbers.
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a+b+c;
    int multiplication = a*b*c;
    printf("the sum of %d %d and %d is %d\n", a,b,c,sum);
    printf("the multiplication of %d %d and %d is %d\n", a,b,c,multiplication);

    
    return 0;
}