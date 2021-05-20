#include <stdio.h>

void roman(int num)
{
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;

    while (num)
    {
        while (num / decimal[i])
        {
            printf("%s", symbol[i]);
            num -= decimal[i];
        }
        i++;
    }
}

int main()
{
    int endFP, startBP, a;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        endFP = n - i + 1;
        startBP = 2 * n - endFP;
        a = 0;

        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (a == n)
            {
                a--;
            }
            if (j <= endFP)
            {
                printf("  ");
                roman(a);
                a++;
            }
            else if (j >= startBP)
            {
                printf("  ");
                roman(a);
                a--;
            }
            else
            {
                printf("  ");
            }
        }
    }
    return 0;
}