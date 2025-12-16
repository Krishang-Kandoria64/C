#include <stdio.h>

int main()
{
    int i=5,j=1;

    do
    {
        j=1;
        do
        {
            printf("%d %d\n",i,j);
            j++;
        }while (j<=2);
        i--;
    }while(i>=3);
}