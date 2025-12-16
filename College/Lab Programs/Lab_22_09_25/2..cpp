#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s[50], t[50];
    printf("Enter the string\n");
    gets(s);

    int i = 0;
    while(s[i] != '\0')
    {
        t[i] = s[i];
        i = i + 1;
    }
    t[i] = '\0';
    printf("%s %s", s,t);
    return 0;
}
