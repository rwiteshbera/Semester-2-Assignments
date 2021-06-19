#include<stdio.h>

void fibonacci(int value){
    static int n1 = 0, n2 = 1, n3;
    if(value>0){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
        fibonacci(value-1);
    }
}

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Fibonacci series: \n");
    
    if(n==1){
        printf("0");
    }
    else if(n==2){
        printf("0 1");
    }
    else if(n>2){
        printf("0 1 ");
        fibonacci(n-2);
    }
    
    printf("\n");

    return 0;
}