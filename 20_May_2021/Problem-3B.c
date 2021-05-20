#include <stdio.h>

void Pattern(int N)
{
    int i, a;

    //First Line
    for (i = 0; i < N; i++)
        printf("* ");
    printf("\n");

    //Second to N-1 Lines
    for (i = 1; i < N - 1; i++)
    {
        printf(" ");
        for (a = 1; a < i; a++)
        {
            printf("  ");
        }
        printf(" *\n");
    }

    //Last Line
    for (i = 0; i < N; i++)
        printf("* ");

    printf("\n");
}

int main()
{

    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    Pattern(N);

    return 0;
}
