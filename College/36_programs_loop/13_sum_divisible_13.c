#include <stdio.h>

int main()
{
    int i=1, sum = 0;
    while(i <= 100)
    {
        if(i%13==0)
            sum = sum + i;
        i++;
    }
    printf("The sum of all the numbers divisible by 13 between 1 & 100 is %d", sum);
    return 0;
}