#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    int i = 0;
    printf("Enter any natural number: ");
    scanf("%d", &n);
    while(n>i)
    {
        i++;
        printf("%d\n", i);
    }
    getch();
    return 0;
} 