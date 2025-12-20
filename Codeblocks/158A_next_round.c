#include <stdio.h>

int compare(int,int);

int main()
{
    int n,k;
    scanf("%d %d",&n,&k); 
    printf("%d",compare(n,k)); 
}

int compare(int x, int y)
{
    int count = 0;
    int a[x], i; 
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(a[i]>=a[y-1] && a[i]!=0)
        {
            count++;
        }
    }
    return count;
}