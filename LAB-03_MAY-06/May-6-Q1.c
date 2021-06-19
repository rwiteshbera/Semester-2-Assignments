#include <stdio.h>

int main()
{
    printf("Odd Number between 1 to 50 \n");
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}