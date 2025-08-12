#include <stdio.h>

int main(){
    int a, b;
    char name[50];
    printf("Hello, what is your name? \n");
    scanf("%s", name);
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int c = a + b;
    int d = c + 1;
    printf("Ok, so the sum of the two numbers is %d! \n" ,d);
    printf("Am i correct? \n");
    char whatever[50];
    scanf("%s", whatever);
    printf("Ok and? So what if i am a computer, i can make mistakes too. Atleast my name isn't %s, lol. \n", name);

    return 0;
}