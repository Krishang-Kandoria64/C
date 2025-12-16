#include <stdio.h>

int even(int x)
{
    if(x<=0)
    {
        return 0;
    }
    even(x-1);
    printf("%d ", 2*x);
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    even(n);
}