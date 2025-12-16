#include <stdio.h>

int fibprint(int x)
{
    if(x==0)
        return 0;
    if(x==1 || x==2)
    {
        return 1;
    }
    return(fibprint(x-1)+fibprint(x-2));
    printf("%d ", x);
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    fibprint(n);
}