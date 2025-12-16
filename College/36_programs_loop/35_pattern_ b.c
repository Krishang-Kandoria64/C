#include <stdio.h>

int main()
{
    int i = 1, j;
    do
    {
        j = 1;
        do
        {
            printf("%d %d\n", i,j);
            j++;
        }while(j<=i);
        i++;
    }while(i<=3); 
}