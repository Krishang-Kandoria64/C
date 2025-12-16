#include <stdio.h>
#include <conio.h>

int main(){
    float r,pi,p,a;
    pi = 22.0/7;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    p = 2 * pi * r;
    a = pi * r * r;
    printf("The circumference or perimeter of the circle is %.2f.\nThe area of the circle is %.2f.",p,a);
    getch();
    return 0;
}