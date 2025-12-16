#include <stdio.h>
#include <conio.h>

int main(){
    int n,a;
    printf("Enter any number: ");
    scanf("%d", &n);
    a = n%7;
    if(a==0)
    printf("The number %d is divisible by 7", n);
    else
    printf("The number %d is not divisible by 7", n);
    
    getch();
    return 0;
}