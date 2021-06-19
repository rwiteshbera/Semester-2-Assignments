#include <stdio.h>

int PrimeNumber(int n)
{
    int isPrime;
    if (n <= 1)
    {
        printf("No Prime Number found.\n");
    }
    for (int i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {

                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}
int main()
{
    int num = 17;
    PrimeNumber(num);
    return 0;
}