#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", num);
        num += 3;
        sum += num;
    }
    printf("\nThe sum is: %d\n", sum);
    return 0;
}