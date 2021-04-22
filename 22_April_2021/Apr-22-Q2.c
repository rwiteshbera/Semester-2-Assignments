/* Temperatures of a city in Fahrenheit degree are input through a
keyboard. Write a program to convert the temperature into centigrade
degrees.*/
#include<stdio.h>

int main()
{
    float fahrenheit, centigrade;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = ((fahrenheit-32)*5)/9;
    printf("%.2f degree Fahrenheit = %.2f degree celsius\n",fahrenheit,centigrade);   
    return 0;
}