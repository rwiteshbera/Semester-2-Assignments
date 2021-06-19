#include<stdio.h>

int main()
{
    int arr[10] = {0};
    int pos;

    for(int i=0; i<10; i++)
    {
        arr[i] = i+1;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
     printf("\n");

    printf("Enter the index: ");
    scanf("%d",&pos);

   if (pos >= 10+1)
      printf("Deletion not possible.\n");
   else
   {
      for (int c = pos - 1; c < 10 - 1; c++)
         arr[c] = arr[c+1];

      printf("\nResultant array:\n");

      for (int c = 0; c < 10 - 1; c++)
         printf("%d ", arr[c]);
   }
   printf("\n");
   
    return 0;
}