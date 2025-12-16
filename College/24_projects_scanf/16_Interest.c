#include <stdio.h>
#include <conio.h>

int main(){
    float i,p,r,n;
    printf("Enter the principal value borrowed: ");
    scanf("%f", &p);
    printf("Enter the annual rate of interest: ");
    scanf("%f", &r);
    printf("Enter the number of years the money is borrowed: ");
    scanf("%f", &n);
    i = p*r*n/100.0;
    printf("The interest amount is %.2f rupees", i);
    getch();
    return 0;
}