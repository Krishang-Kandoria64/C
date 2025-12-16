#include <stdio.h>

int main(){
    float g,kg;
    printf("Enter the mass in grams: ");
    scanf("%f", &g);
    kg = g/1000;
    printf("%.2f grams is equal to %.2f kilograms", g,kg);
    return 0;
}