#include <stdio.h>

void bit(int,int);

int main()
{
    int n;
    scanf("%d",&n);
    bit(n,0);
}

void bit(int x, int y)
{
    char str[4];
    int i;
    for(i=0;i<x;i++)
    {
        scanf("%s", str);

        if(str[1]=='+')
        {
            y++;
        }

        if(str[1]=='-')
        {
            y--;
        }
    }
    printf("%d",y);
}