#include<stdio.h>

int sum(int n){
    int lastDigit, sum=0;
    while (n>0)
    {
       lastDigit = n%10;
       sum += lastDigit;
       n = n/10;
    }
    return sum;    
}

int main(){
    int num;
    printf("Enter a  number: ");
    scanf("%d", &num);

    printf("Sum of the digits: %d\n", sum(num));
    return 0;
}