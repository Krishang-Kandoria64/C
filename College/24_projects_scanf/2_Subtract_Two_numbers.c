#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    c = a - b;
    d = b - a;
    printf("%d - %d is %d and %d - %d is %d", a,b,c,b,a,d);
    return 0;
}
