#include <stdio.h>

int main()
{
    int m, n, arr[100][100];

    printf("Enter the number of rows and columns\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}