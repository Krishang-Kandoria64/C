#include <stdio.h>

int oddeven(int);

int main()
{
    int w;
    scanf("%d",&w);
    oddeven(w);
}

int oddeven(int x)
{
    return((x!=2 && x%2==0)?(printf("YES")):(printf("NO")));
}