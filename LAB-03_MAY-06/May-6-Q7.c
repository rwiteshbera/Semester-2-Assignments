#include <stdio.h>
#include <math.h>

int factorial(int x)
{
	int fact = 1;
	for (int i = 1; i <= x; i++)
		fact = fact * i;
	return fact;
}

int main()
{
	float x, sum = 0;
	int limit;

	printf("Enter the value of x: ");
	scanf("%f", &x);

	printf("Enter the limit: ");
	scanf("%d", &limit);

	x = x * (3.1415 / 180);

	int j;
	for (int i = 1, j = 1; i <= limit; i++, j = j + 2)
	{
		if (i % 2 != 0)
		{
			sum = sum + pow(x, j) / factorial(j);
		}
		else
			sum = sum - pow(x, j) / factorial(j);
	}

	printf("S = %f\n", sum);
	return 0;
}