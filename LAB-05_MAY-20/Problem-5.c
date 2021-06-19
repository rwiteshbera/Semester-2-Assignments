#include <stdio.h>  
  
int main()  
{  
    int x,n,m=1;  
    printf("Enter a number: ");  
    scanf("%d",&x);  
  
    n = x/2;
   for(int i=n;i>1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf("  ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf(" *");  
       }  
       m++;  
     
      printf("\n");  
    }  

        m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf("  ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf(" *");  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}  