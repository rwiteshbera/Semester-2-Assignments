#include <stdio.h>

int binomialCoefficient(int n, int k);
void printPascal(int n)
{
	for (int line = 0; line < n; line++)
	{
		for (int i = 0; i <= line; i++)
        {
			printf("%d ",binomialCoefficient(line, i));
        }
		printf("\n");
	}
}

int binomialCoefficient(int n, int k)
{
	int res = 1;
	if (k > n - k)
	k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}
	
	return res;
}


int main()
{
	printf("Enter a number: ");
    int n;
    scanf("%d",&n);
	printPascal(n);
	return 0;
}
