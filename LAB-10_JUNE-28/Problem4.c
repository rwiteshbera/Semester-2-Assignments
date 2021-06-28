#include <stdio.h>

void countNumber(int m, int n, int arr[100][100])
{
    int countZero = 0, countNonZero = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]!=0)
            {
                countNonZero++;
            }
            else{
                countZero++;
            }
        }
    }

    printf("Number of zero value: %d\n", countZero);
    printf("Number of non-zero values: %d\n", countNonZero);
}

int main()
{
    int m, n, arr[100][100];

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    countNumber(m, n, arr);

    return 0;
}