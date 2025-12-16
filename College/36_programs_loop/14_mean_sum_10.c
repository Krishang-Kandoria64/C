#include <stdio.h>

int main()
{
    printf("Enter any ten values: ");
    float a[10];
    int i = 0;
    while(i<10)
    {
        scanf("%f", &a[i]);
        i++;
    }
    float sum=0, mean;
    i = 0;
    while(i<10)
    {
        sum = sum + a[i];
        i++;
    }
    mean = sum/10.00;
    printf("The sum of the 10 numbers is %.2f and the mean of the 10 numbers is %.2f", sum, mean);
    return 0;
}