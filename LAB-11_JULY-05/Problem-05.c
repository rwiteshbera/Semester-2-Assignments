#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int n;
    printf("Enter a string: ");
    fgets(str,100,stdin);

    printf("Enter the value of n: ");
    scanf("%d", &n);
    int lastIndex = strlen(str)-1;

    for(int i = lastIndex-n; i<=lastIndex; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}