#include <stdio.h>

int fib(int x)
{
    return(x?((x!=1)?(fib(x-1)+fib(x-2)):1):0);
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d", fib(n));
}