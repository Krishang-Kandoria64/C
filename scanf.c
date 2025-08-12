#include <stdio.h>
int main(){
    char n[50];
    printf("Hello, what is your name? \n");
    scanf("%s", n);
    printf("Nice to meet you, %s.", n);
    return 0;
}