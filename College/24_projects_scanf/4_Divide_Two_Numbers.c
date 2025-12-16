#include <stdio.h>

int main(){
    float a,b,c,d;
    printf("Enter any two numbers: ");
    scanf("%f %f", &a,&b);
    c = a/b;
    d = b/a;
    printf("%.2f is %.2f divided by %.2f and %.2f is %.2f divided by %.2f", c,a,b,d,b,a);
    return 0;
}
