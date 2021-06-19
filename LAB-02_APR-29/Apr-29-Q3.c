#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    int discriminate;
    float root1, root2;
    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminate = (b*b)-(4*a*c);

     if(discriminate==0)
   {
     printf("Both roots are equal.\n");
     root1=-b/(2.0*a);
     root2=root1;
     printf("First  Root = %f\n",root1);
     printf("Second Root = %f\n",root2);
   }
    if(discriminate>0)
	{
	   root1=(-b+sqrt(discriminate))/(2*a);
	   root2=(-b-sqrt(discriminate))/(2*a);
	   printf("First  Root = %f\n",root1);
	   printf("Second Root = %f\n",root2);
	}
	else
	    printf("Root are imaginary.\n");
    return 0;
}