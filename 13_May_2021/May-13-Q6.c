#include<stdio.h>

int main()
{
    int n , m=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf("  ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf(" *");  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;
}