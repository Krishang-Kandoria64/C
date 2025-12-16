#include <stdio.h>

int main()
{
    int i=1,j,k;

    do
    {   
        j = 1;
        do
        {
            k = 1;
            do
            {
                printf("%d %d %d\n",i,j,k);
                k++;
            }while(k<=2);
            j++;
        }while(j<=2);
        i++;
    }while(i<=2);
}