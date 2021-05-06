#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    int res = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        res += lastDigit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", res);

    return 0;
}