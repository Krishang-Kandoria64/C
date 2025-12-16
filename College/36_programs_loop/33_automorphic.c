#include <stdio.h>

int main()
{
    int n,digit=0, i = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    int t,k;
    t = n;
    do
    {
        t = t/10;
        digit++;
    }while(t!=0);
    
    k = n * n;
    int flag = 1;

    do
    {
        if(k%10 != n%10)
        {
            flag = 0;
            break;
        }
        i++;
    }while(i<digit);

    if(flag == 1)
        printf("%d is an Armstrong number",n);
    else
    if(flag == 0)
        printf("%d is not an Armstrong number",n);
}