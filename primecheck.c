#include <stdio.h>

int main()
{
    int primecheck(int);
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    primecheck(n);
}

int primecheck(int x)
{
    if(x<=1)
    {
        printf("%d is neither prime nor composite number.",x);
        return 0;
    }
    if(x==2)
    {
        printf("2 is a prime number.");
        return 0;
    }
    int i,flag=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag!=0)
    {
        printf("%d is a prime number.",x);
    }
    else
    {
        printf("%d is a composite number.",x);
    }
    return 0;
}