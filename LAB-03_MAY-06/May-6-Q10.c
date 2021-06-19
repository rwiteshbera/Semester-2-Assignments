#include <stdio.h>
#include <math.h>

void SumSequence(int n)
{
    int sum = 0;
    for (int i = 0, j = 2, x = 1; i < n; j += 2, i++)
    {
        sum += pow(-1, i) * x;
        x += j;
    }

    printf("The sum upto %dth term is: %d\n", n, sum);
}

int main()
{
    printf("Enter x number: ");
    int num;
    scanf("%d", &num);

    SumSequence(num);
    return 0;
}