#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int x=1;
    printf(" ");
    for(int i=1; i<=n; i++)
    {
        printf("%d  ",x);
    }
    printf("\n");

     for(int i=2; i<=n-1; i++)
    {
        printf("%2d ",i);
        for(int j=1; j<=n-2; j++)
        {
            printf("   ");
        }
        printf("%2d \n",i);
    }

    for(int i=1; i<=n; i++)
    {
        printf("%2d ",n);
    }
    printf("\n");

    return 0;
}