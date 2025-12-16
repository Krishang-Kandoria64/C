#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    

    for(i=0;n!=0;i++)
    {
        printf("%d", n%10);
        n = n/10;  
    }
    return 0;
}