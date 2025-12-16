#include <stdio.h>
#include <conio.h>

int main(){
    float s,g,d;
    printf("Enter the gross sales: ");
    scanf("%f", &g);
    d = 0.1 * g;
    s = g - d;
    printf("The net sale will be %.2f rupees.", s);
    getch();
    return 0;
}