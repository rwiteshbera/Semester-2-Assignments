#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if (a > 1)
    {
        for (int i = 0; i < a; i++)
        {
            printf("C ");
        }
        printf("\n");

        for (int i = 0; i < (a - 2); i++)
        {
            printf("C\n");
        }

        for (int i = 0; i < a; i++)
        {
            printf("C ");
        }
        printf("\n");
    }
    else
    {
        printf("C\n");
    }

    return 0;
}