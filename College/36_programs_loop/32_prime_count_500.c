#include <stdio.h>

int main()
{
   
    int i = 3, j =2, count = 1,prime;
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
            count = count + 1;
        i++;
    } while (i<=500);
    
    printf("%d", count);
    
}