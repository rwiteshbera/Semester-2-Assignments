#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    char numeric[100];
    int j = 0;
    for(int i=0; str[i]!=0; i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            numeric[j]=str[i];
            j++;
        }
    }

    printf("Numeric Characters: ");
    for(int k=0; numeric[k]!='\0'; k++)
    {
        printf("%c",numeric[k]);
    }
    printf("\n");
    return 0;
}