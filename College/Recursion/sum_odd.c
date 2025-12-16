#include <stdio.h>

int oddsum(int x)
{
    if(x<=0)
    {
        return 0;
    }
    return ((2*x-1)+oddsum(x-1));
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d",oddsum(n));
}