#include <stdio.h>  
  
int main()  
{  
    int n, m=1;  
    printf("Enter a number: ");  
    scanf("%d",&n);

//Pattern 1

    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    } 


printf("\n");
//Pattern 2

     for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
           if(k==1 || k==m || m==n)  
            printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;  
}  