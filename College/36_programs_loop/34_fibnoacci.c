#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int s,t=1,u=1,i=0;
    if(n>=3)
    {
        printf("%d,%d",t,u);
        do
        {
            s = t + u;
            printf(",%d",s);
            u = t;
            t = s;
            i++;
        } while (i<n-2);
    }
    else
    if(n==2)
    {
        printf("1,1");
    }
    else
    if(n==1)
    {
        printf("1");
    }
}