#include <stdio.h>
#include <conio.h>

int main(){
    float n,g,a,d;
    printf("Enter the gross salary: ");
    scanf("%f", &g);
    a = 0.1 * g;
    d = 0.03 * g;
    n = g + a - d;
    printf("The net salary is %.2f", n);
    getch();
    return 0;
}