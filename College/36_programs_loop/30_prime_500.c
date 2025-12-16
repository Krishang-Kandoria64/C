#include <stdio.h>

int main()
{
    printf("2");
    int i = 3, j =2, prime;
    do
    {
        prime = 1;
        j = 2;
        do
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
            j++;
        } while (j<i);

        if(prime == 1)
            printf(",%d", i);        
        i++;
    } while (i<=500);
    
}