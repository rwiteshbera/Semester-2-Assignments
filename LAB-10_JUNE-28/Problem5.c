#include <stdio.h>

void sum( int m, int n, int arr[m][n])
{
    int odd = 0, even = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                odd = odd + arr[i][j];
            }
            else
            {
                even = even + arr[i][j];
            }
        }
    }
    printf("Sum of odd number: %d\n", odd);
    printf("Sum of even number: %d\n", even);
}
int main()
{
    int m, n;
    printf("Enter the rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    sum(m,n, arr);
    return 0;
}