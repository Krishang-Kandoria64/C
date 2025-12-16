#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a,&b);
    c= a * b;
    printf("The product of %d and %d is %d", a,b,c);
    return 0;
}
