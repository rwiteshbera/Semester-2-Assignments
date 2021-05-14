#include <stdio.h>

int main()
{

//PATTERN - A
    int n, space = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    space = n - 1;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= space; i++)
        printf("  ");
        space--;
        for (int i = 1; i <= 2*j-1; i++)
        printf("* ");
        printf("\n");   
    }    
    space = 1;
    for (int j = 1; j <= n - 1; j++)
    {
        for (int i = 1; i <= space; i++)
        printf("  ");
        space++;
        for (int i = 1 ; i <= 2*(n-j)-1; i++)
        printf("* ");
        printf("\n");    
    }


  printf("\n\n");
  

//PATTERN - B
  for(int i=1; i<=n; i++)
  {
     for(int j=i; j<=n; j++)
     { 
       printf("  ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==(2*i-1)) printf("* ");
       else printf("  ");
     }
     printf("\n");
  }

  for(int i=n-1; i>=1; i--)
  {
     for(int j=n; j>=i; j--)
     {
       printf("  ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==2*i-1) printf("* ");
       else printf("  ");
     }
     printf("\n");
  }

    return 0; 
}
