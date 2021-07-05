#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a sentence.\n");
    fgets(str,100,stdin);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==32)
        {
            continue;
        }
        printf("%c",str[i]);
    }
    return 0;
}