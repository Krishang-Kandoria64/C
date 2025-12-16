#include <stdio.h>

int main()
{
    int num1,num,i=0,a[50];
    printf("Enter any number: ");
    scanf("%d", &num);
    num1 = num;

    do
    {
        a[i] = num%10;
        num = num/10;
        i++;
    }while(num!=0);

    int t[i],j = 0;
    do
    {
        t[j]= a[i-j-1];
        j++;
    }while(j<i);
    
    j = 0;
    do
    {
        if(a[j]!=t[j])
        {
            printf("%d is not a palindrome number", num1);
            break;
        }
        j++;
    }while(j<i);
    
    if(j==i)
        printf("%d is a palindrome number", num1);
    return 0;
}
    
