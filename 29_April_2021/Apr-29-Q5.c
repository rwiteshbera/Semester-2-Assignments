#include<stdio.h>

int main()
{
    float num1, num2;
    char operator;
    float ans = 0;
    printf("Enter the operator to perform: ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    

    switch (operator)
    {
    case '+':
        ans = num1+num2;
        printf("The answer is: %.2f\n", ans);
        break;
    case '-':
        ans = num1-num2;
        printf("The answer is: %.2f\n", ans);
        break;
    case '*':
        ans = num1*num2;
        printf("The answer is: %.2f\n", ans);
        break;
    case '/':
        ans = num1/num2;
        printf("The answer is: %.2f\n", ans);
        break;
    
    default:
        printf("Invalid input\n");
        break;
    }

    
    return 0;
}