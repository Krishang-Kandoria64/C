#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float h,l,p,a;
    printf("Enter the height of the right angled triangle: ");
    scanf("%f", &h);
    printf("Enter the base of the right angled triangle: ");
    scanf("%f", &l);
    a = h * l / 2;
    p = h + l + sqrt((h*h) + (l*l));
    printf("The perimeter of the triangle is %f.\nThe area of the triangle is %f", p,a);
    getch();
    return 0;
}