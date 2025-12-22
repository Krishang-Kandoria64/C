#include <stdio.h>

int mod(int x)
{
    if(x<0)
    {
        return -x;
    }
    else 
        return x;
}

int main()
{
    int i,j,n,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                goto ij;
            }
        }
    }
    ij:
    n = mod(i-2)+mod(j-2);
    printf("%d",n);
  
    return 0;
}