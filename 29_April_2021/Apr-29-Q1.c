#include<stdio.h>

int main()
{
    printf("Enter the value of x and n: ");
    int n; float x;
    scanf("%f %d",&x, &n);

    float Y;
    if(n==1)
    {
        Y = 1+(x*x);
    }
    else if(n==2)
    {
        Y = 1+(x/n);
    }
    else if(n==3)
    {
        Y = 1+(2*x);
    }
    else if(n<1 && n>3)
    {
        Y = 1+(n*x);
    }
    
    printf("The value of Y is: %0.3f\n", Y);
    return 0;
}