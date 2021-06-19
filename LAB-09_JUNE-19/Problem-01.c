#include<stdio.h>

int factorial(int value){
    if(value==0) return 1;
    else{
        return value*factorial(value-1);
    }
}

int getResult(int num){
    int sum = 0;
    if(num == 0) return sum;
    else{
        for(int i=1; i<=num; i++){
            sum+=factorial(i);
        }
    }
    return sum;
}

int main(){
    int value;
    printf("Enter an integer: ");
    scanf("%d", &value);

    printf("Sum of the series is: %d\n",getResult(value));
    return 0;
}