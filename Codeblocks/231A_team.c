#include <stdio.h>

int  team(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",team(n));
}

int team(int x)
{
    int i,a,b,c,k=0;
    for(i=0;i<x;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>1)
        {
            k++;
        }
    }
    return k;
}

 