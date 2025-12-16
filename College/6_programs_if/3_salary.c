#include <stdio.h>
#include <conio.h>

int main(){
    int n,g,a,d;
    printf("Enter the gross salary: ");
    scanf("%d", &g);
    if(g>10000){
        a = 10*g/100;
        d = 3*g/100;
        n = g + a - d;
        printf("The net salary will be %d", n);
    }
    else 
    if(g>5000 && 10000>g){
        a = 7*g/100;
        d = 2*g/100;
        n = g + a - d;
        printf("The net salary will be %d", n);
    }
    else 
    if(5000>g)
        printf("Unfortunately, we can't calculate your net salary");
    getch();
    return 0;
}