#include <stdio.h>
int main()
{
    printf("Enter the string : \n");
    char s[200];
    fgets(s,200,stdin);
    int count = 0, vowels[5] = {};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a')
            vowels[0]++;

        if (s[i] == 'e')
            vowels[1]++;

        if (s[i] == 'i')
            vowels[2]++;

        if (s[i] == 'o')
            vowels[3]++;

        if (s[i] == 'u')
            vowels[4]++;

        if (s[i] == ';')
            s[i] = '@';
    }

    for (int i = 0; i < 5; i++)
    {
        if (vowels[i] > 0)
            count++;
    }

    printf("Number of Vowels (non-repeated) = %d\n", count);
    printf("String after replacement = %s", s);
    return 0;
}