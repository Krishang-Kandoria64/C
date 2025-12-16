#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s[50];
    printf("Enter the string:\n");
    gets(s);

    printf("The length of the string is %d", strlen(s));

    return 0;

}

