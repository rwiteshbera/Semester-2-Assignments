#include<stdio.h>

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        for(int j=i; j<=N; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}