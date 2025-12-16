#include <stdio.h>
#include <conio.h>

int main(){
    float rupee,pound,dollar; 
    printf("Enter the ammount in Dollars: ");
    scanf("%f", &dollar);
    rupee = dollar * 48;
    pound = rupee/70;
    printf("%.2f Dollars are equivalent to %.2f Pounds", dollar, pound);
    getch();
    return 0;
    
}