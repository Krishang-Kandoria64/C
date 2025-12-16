#include <stdio.h>

int main(){
    float a,b,sum,diff1,diff2,prod,quotient1,quotient2;
    printf("Enter any two numbers (except 0): ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    diff1 = a - b;
    diff2 = b - a;
    prod = a * b;
    quotient1 = a / b;
    quotient2 = b / a;
    printf("The sum of %.2f and %.2f is %.2f\n", a,b,sum);
    printf("The difference of %.2f and %.2f is %.2f\n", a,b,diff1);
    printf("The difference of %.2f and %.2f is %.2f\n", b,a,diff2);
    printf("The product of %.2f and %.2f is %.2f\n", a,b,prod);
    printf("The quotient of %.2f and %.2f is %.2f\n", a,b,quotient1);
    printf("The quotient of %.2f and %.2f is %.2f\n", b,a,quotient2);
    return 0;
}
