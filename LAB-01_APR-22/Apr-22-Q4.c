/* Write a C program to take (two input values) length and width of a
rectangle from user and calculate followings of the rectangle:
a) Area
b) Perimeter
c) Length of its Diagonal */
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    printf("Enter the value of length and width of a rectangle: "); 
    scanf("%f %f",&a,&b);

    float area = a*b;
    float perimeter = 2*(a+b);
    float len_diagonal = sqrt(a*a+b*b);
    printf("Area = %.2f sq.unit\n",area);
    printf("Perimeter = %.2f unit\n",perimeter);
    printf("Diagonal length = %.2f unit\n",len_diagonal);

    return 0;
}