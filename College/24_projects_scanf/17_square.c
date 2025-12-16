#include <stdio.h>
#include <conio.h>

int main(){
    float l,p,a;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &l);
    p = 4*l;
    a = l*l;
    printf("The perimeter of the square is %.2f.\nThe area of the square is %.2f.", p,a);
    getch();
    return 0;
}