#include <stdio.h>

int main()
{
   
    int i = 3, j =2, sum = 2,prime;
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
            sum = sum + i;
        i++;
    } while (i<=500);
    
    printf("%d", sum);
    
}