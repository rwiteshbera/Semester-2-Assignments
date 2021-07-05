#include<stdio.h>

int main(){
    printf("Write a sentence: \n");
    char sentence[100];
    fgets(sentence, 100, stdin);

    int count = 0;
    for(int i=0; sentence[i]!='\0'; i++)
    {
        if(sentence[i]=='\n' || sentence[i]==' ' || sentence[i]=='\t'){
            count++;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}