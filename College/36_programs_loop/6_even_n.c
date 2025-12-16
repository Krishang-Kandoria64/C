#include <stdio.h>
#include <conio.h>

int main(){
    int i,n,k;
    printf("Enter any natural number: ");
    scanf("%d", &k);
    i = 0;
    while (i<k)
    {
        i++;
        n = 2*i;
        printf("%d\n", n);
    };
    getch();
    return 0;
}