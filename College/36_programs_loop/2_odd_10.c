#include <stdio.h>
#include <conio.h>

int main(){
    int i,n;
    i = 0;
    while (i<10)
    {
        i++;
        n = 2*i - 1;
        printf("%d\n", n);
    };
    getch();
    return 0;
}