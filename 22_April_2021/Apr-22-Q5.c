/*Write a C Program to find area of a triangle using the following formula:
Area of triangle=(s*(s- a)*(s-b)*(s-c))1⁄2 where a, b and c are three sides
of the triangle and s= (a+b+c)/2.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter the length of three sides of a triangle in cm: ");
    scanf("%f %f %f",&a,&b,&c);

    float s = (a+b+c)/2.0; // where s = semiperimeter
    float area = sqrt((s*(s- a)*(s-b)*(s-c)));

    printf("The are of the triangle is: %.2f sq.cm.\n",area);

    return 0;
}
