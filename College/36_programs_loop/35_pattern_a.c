#include <stdio.h>

int main()
{
    int i=1, j=1;
    do
    {
        j=1;
        do
        {
            printf("%d %d\n",i,j);
            j++;
        }while(j<=3);
        i++;
        
    }while(i<=2);
}