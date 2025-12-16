#include <stdio.h>
#include <conio.h>

int main(){
    int p,m,c,t;
    float a;
    printf("Enter the marks of Maths subject out of 100: ");
    scanf("%d", &m);
    printf("Enter the marks of Physics subject out of 100: ");
    scanf("%d", &p);
    printf("Enter the marks of Computer Programming subject out of 100: ");
    scanf("%d", &c);
    t = p + m + c;
    a = t/3;
    printf("The average of the 3 subjects is %.2f.\nThe total marks out of 300 is %d.", a,t);
    getch();
    return 0;
}