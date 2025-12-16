#include <stdio.h>

int main(){
    int a[200], pos = 0, neg = 0, zero = 0, i;
    printf("Enter any 200 integers: ");
    for(i=0;i<200;i++)
        scanf("%d", &a[i]);
    
    for(i=0;i<200;i++)
    {
        if(a[i]==0)
            zero++;
        else
        if(a[i]<0)
            neg++;
        else
            pos++;
    }
    printf("The total positive numbers are %d\n", pos);
    printf("The total negative numbers are %d\n", neg);
    printf("The total number of zeroes are %d", zero);
    return 0;
}