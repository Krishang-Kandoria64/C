#include <stdio.h>

int fact(int x)
{
    return((x)?(x*fact(x-1)):1);
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d", fact(n));
}