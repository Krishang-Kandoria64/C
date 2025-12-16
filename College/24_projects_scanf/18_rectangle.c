#include <stdio.h>
#include <conio.h>

int main(){
    float l,b,p,a;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    p = 2 * (l+b);
    a = l * b;
    printf("The perimeter of the rectangle is %.2f.\nThe area of the rectangle is %.2f", p,a);
    getch();
    return 0;
}