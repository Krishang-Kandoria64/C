#include <stdio.h>

int digit(int x)
{
    if(x==0)
    {
        return 0;
    }
    printf("%d, ", x%10);
    digit(x/10);
}

int main()
{
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  digit(n);
}