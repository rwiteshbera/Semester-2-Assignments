#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    int reverse = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num = num / 10;
    }

    printf("Reversed Number: %d\n", reverse);
    return 0;
}