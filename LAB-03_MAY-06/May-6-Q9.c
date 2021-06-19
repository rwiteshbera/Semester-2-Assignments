#include <stdio.h>

int sumSeries(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            sum += j;
    return sum;
}

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    printf("Sum of the series: %d\n", sumSeries(num));

    return 0;
}