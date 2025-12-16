#include <stdio.h>

int main()
{
    int i=1,j=5;
    
    do
    {
        printf("%d %d\n",i,j);
        i++;
        j--;
    }while(i<=5 && j>=1);
}