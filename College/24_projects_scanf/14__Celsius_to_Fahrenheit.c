#include <stdio.h>
#include <conio.h>

int main(){
    float C,F;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &C);
    F = ((9.0/5) * C) + 32;
    printf("%.2f Celsius is equal to %.2f Fahreneit", C, F);
    return 0;
}