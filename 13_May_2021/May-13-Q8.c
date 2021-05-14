#include <stdio.h>

int main()
{
    int k = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (k % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            k++;
        }

        printf("\n");
    }


printf("\n");


	int counter=0;
	
    for(int i=1;i<n;i++){
    	
    	for(int j=1;j<=n-i;j++) {
    		printf("  ");
		}
		for(int k=1;k<=i;k++) {
    		printf("%d ",counter++);
		}
		
		printf("\n");
	}

    return 0;
}