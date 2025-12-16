#include <stdio.h>

int main()
{
    int even(int);
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    even(n);
}

int even(int x)
{
    x==0?0:(even(x-1),printf("%d ", 2*x));
}
