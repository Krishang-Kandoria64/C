#include <stdio.h>

int gcd(int x, int y)
{
    
    return(y?(gcd(y,x%y)):x);
}

int main()
{
    int m,n;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    printf("%d", gcd(m,n));
}