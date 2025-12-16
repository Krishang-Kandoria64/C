#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 0,i = 1;
    do
    {
        if(n%i==0)
            sum = sum + i;
        i++;
    }while(i<=n/2);

    if(sum==n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);
}