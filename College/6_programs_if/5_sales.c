#include <stdio.h>
#include <conio.h>

int main(){
    int n,g,d;
    printf("Enter the gross sales: ");
    scanf("%d", &g);
    if(g>20000){
        d = 15*g/100;
        n = g - d;
        printf("The net sales will be %d", n);
    }
    else
    if(g>10000){
        d = 10*g/100;
        n = g - d;
        printf("The net sales will be %d", n);
    }
    else{
        d = 5 * g/100;
        n = g - d;
        printf("The net sales will be %d", n);
    }
        getch();
    return 0;
}