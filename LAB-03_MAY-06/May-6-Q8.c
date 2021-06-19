#include <stdio.h>

int main()
{
    printf("Enter a two digit number: ");
    int num;
    scanf("%d", &num);
    int temp = num;

    int lastDigit = num % 10;
    num /= 10;
    int firstDigit = num;
    if(firstDigit > 9)
    {
        printf("Invalid input\n");
        return 0;
    }
    switch (temp)
    {
    case 11:
        printf("Eleven\n");
        return 0;
    case 12:
        printf("Twelve\n");
        return 0;
    case 13:
        printf("Thirteen\n");
        return 0;
    case 14:
        printf("Fourteen\n");
        return 0;
    case 15:
        printf("Fifteen\n");
        return 0;
    case 16:
        printf("Sixteen\n");
        return 0;
    case 17:
        printf("Seventeen\n");
        return 0;
    case 18:
        printf("Eighteen\n");
        return 0;
    case 19:
        printf("Nineteen\n");
        return 0;
    }

    if (firstDigit == 2)
    {
        printf("Twenty-");
    }
    else if (firstDigit == 3)
    {
        printf("Thirty-");
    }
    else if (firstDigit == 4)
    {
        printf("forty-");
    }
    else if (firstDigit == 5)
    {
        printf("fifty-");
    }
    else if (firstDigit == 6)
    {
        printf("sixty-");
    }
    else if (firstDigit == 7)
    {
        printf("seventy-");
    }
    else if (firstDigit == 8)
    {
        printf("eighty-");
    }
    else if (firstDigit == 9)
    {
        printf("ninety-");
    }

    if (lastDigit == 0)
    {
    }
    else if (lastDigit == 1)
    {
        printf("one");
    }
    else if (lastDigit == 2)
    {
        printf("two");
    }
    else if (lastDigit == 3)
    {
        printf("three");
    }
    else if (lastDigit == 4)
    {
        printf("four");
    }
    else if (lastDigit == 5)
    {
        printf("five");
    }
    else if (lastDigit == 6)
    {
        printf("six");
    }
    else if (lastDigit == 7)
    {
        printf("seven");
    }
    else if (lastDigit == 8)
    {
        printf("eight");
    }
    else if (lastDigit == 9)
    {
        printf("nine");
    }

    printf("\n");
    return 0;
}