#include <stdio.h>

int main()
{
    int i,n,k,sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    

    for(i=0;n!=0;i++)
    {
        k = n % 10;
        n = n/10;
        sum = sum + k;
    }
    printf("%d", sum);
   
}