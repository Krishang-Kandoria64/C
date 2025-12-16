#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if(n==1)
    {
        printf("1 is neither a prime nor a composite number");
       return 0;
    }
    
     if(n==2)
     {
        printf("2 is a prime number");
        return 0;
     }

    int i = 2;
    do
    {
        if(n%i==0)
        {
            printf("%d is not a prime number", n);
            break;
        }
        i++;
    } while (i<n);
   

    if(i==n)
        printf("%d is a prime number", n);
    
}