#include <stdio.h>

int main()
{
    int digit=0,n,n1,sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    n1=n;

    do
    {
        n=n/10;
        digit++;
    }while(n!=0);
    n = n1;
   int t,j=0,i=0;
   do
   {
    t=1;
    i=0;
    do
    {
        t = t * (n%10);
        i++;
    }while(i<digit);
 
    sum = sum + t;
    n=n/10;
    j++;
   } while (j<digit);


   
   if(n1 == sum)
    printf("%d is an Armstrong Number", n1);
   else
    printf("%d is not an Armstrong Number", n1);
}