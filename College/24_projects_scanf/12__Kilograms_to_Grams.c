#include <stdio.h>
#include <conio.h>

int main(){
    float g,kg;
    printf("Enter the mass in kilograms: ");
    scanf("%f", &kg);
    g = kg * 1000;
    printf("%.2f kilograms is equal to %.2f grams", kg,g);
    getch();
    return 0;
}