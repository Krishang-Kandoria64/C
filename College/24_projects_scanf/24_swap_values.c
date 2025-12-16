#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    printf("Enter any two values: ");
    scanf("%d %d", &a,&b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("%d %d", a,b);
    getch();
    return 0;
}