#include <stdio.h>

int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return (x * fact(x - 1));
}

void Strong(int n)
{
  int temp = n;
  int ans = 0;
  while (temp>0)
  {
     int lastDigit = temp%10;
     ans+=fact(lastDigit);
     temp/=10;
  }
      
  if(ans==n)
  {
      printf("Strong Number.\n");
  }
  else
  {
      printf("Not a strong number.\n");
  }

}

int main()
{
    printf("Enter the value: ");
    int n;
    scanf("%d", &n);

    Strong(n);

    return 0;
}