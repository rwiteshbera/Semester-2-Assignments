#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}

int main()
{
    printf("Enter the value of nth term: ");
    int n;
    scanf("%d", &n);

    int sum=0;

    for(int i=1; i<=n; i++) {
    if (i % 2 == 0)
    {
        sum -= fact(i);
    }
    else if(i%2!= 0)
    {
        sum += fact(i);
    }
}

    printf("Sum of the series: %d\n", sum);
    return 0;
}