#include <stdio.h>

int main()
{
    int natural(int);
    printf("Enter any number: ");
    int n;
    scanf("%d", &n);
    natural(n);
}

int natural(int x)
{
    if(x<=0)
    {
        return 0;
    }

    natural(x-1);
    printf("%d ",x);
}
