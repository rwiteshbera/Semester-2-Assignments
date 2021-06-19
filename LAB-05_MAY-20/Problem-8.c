#include<stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("\n");
        if (i==1)
        {
            c=a;
        }
        else if(i==2)
        {
            c==b;
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
        }

        for(int j=1; j<=n; j++)
        {
            if (j==1 || j==i || j==n-i+1 || j==n)
            {
               printf("%d       ",c);
            }
            else
            { 
                printf("        ");
            }
        }
    }

    printf("\n");
    return 0;
}