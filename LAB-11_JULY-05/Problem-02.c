#include <stdio.h>

int main()
{

    char str1[100], str2[100];

    printf("Enter two string: ");
    scanf("%s",str1);
    scanf("%s",str2);

    char str3[100];

    int i = 0, j = 0;
    printf("\nString 1 : %s", str1);
    printf("\nString 2: %s", str2);

    while (str1[i] != '\0')
    {
        str3[j++] = str1[i++];
    }

    i = 0;
    while (str2[i] != '\0')
    {
        str3[j++] = str2[i++];
    }
    str3[j] = '\0';

    printf("\nConcatenated string: %s\n", str3);

    return 0;
}