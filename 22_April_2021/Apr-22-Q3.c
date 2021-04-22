/*Two numbers are input through a keyboard into two locations. Write a
program to interchange the contents of the two variables.(using third
variable and without using third variable)*/
#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Before Swap: a=%d, b=%d\n",a,b);

    //Swapping the number using third variable
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swap using third variable: a=%d, b=%d\n", a,b);
    
    //Swapping by bit manipulation
    a = a^b;
    b = a^b;
    a = a^b;

    printf("After swap without using third variable: a=%d, b=%d\n", a,b);

    return 0;
}