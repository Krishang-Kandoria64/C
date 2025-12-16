#include <stdio.h>
#include <conio.h>

int main(){
    float C,F;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (5.0/9) * (F - 32);
    printf("%.2f Fahrenheit is equal to %.2f Celsius", F, C);
    getch();
    return 0;
}