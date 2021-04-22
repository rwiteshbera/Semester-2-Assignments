/*Write a C program to change the sign of user given number.
For example, if user gives -5, output will be +5.*/
#include<stdio.h>

int main()
{
    int value;
    printf("Enter a integer: ");
    scanf("%d",&value);

    value *= -1;
    
    printf("The value after changing the sign: %d\n", value);
    return 0;
}