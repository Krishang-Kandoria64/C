#include <stdio.h>

int main()
{
    int i, sum = 0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
            sum = sum + i;
    }
    printf("The sum of the numbers between 1 and 100 divisble by 3 is %d", sum);
    return 0;
}