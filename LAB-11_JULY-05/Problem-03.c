#include <stdio.h>
#include <string.h>

void checkPalindrome(char *s)
{
    int l = 0, h = strlen(s)-1;
    while(h>=l)
    {
        if(s[l]!=s[h])
        {
            printf("Not a palindrome.\n");
            return;
        }
        l++;
        h--;
    }
    printf("Palindrome.\n");
}

int main()
{
    char s[100];
    char rev[100];
    printf("Enter a string: ");
    scanf("%s",s);

    int j = 0, i=strlen(s)-1;
    while(i!=-1)
    {
        rev[j] = s[i];
        i--;
        j++;
    }

    rev[j] = '\0';
    printf("%s", rev);


    printf("\n");
    checkPalindrome(s);
    return 0;
}