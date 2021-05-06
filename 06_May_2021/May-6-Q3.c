#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 1, nextTerm = 0;

    printf("Fibonacci Series: %d, %d, ", num1, num2);
    nextTerm = num1 + num2;

    while (nextTerm <= 17)
    {
        printf("%d, ", nextTerm);
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }
    return 0;
}