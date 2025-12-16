#include <stdio.h>

int main()
{
    void div13or3();
    div13or3();
}

void div13or3()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 || i%13==0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}