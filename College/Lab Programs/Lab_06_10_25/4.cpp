#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c;
    float add (float, float);
    printf("Enter any two numbers: ");
    scanf("%f  %f", &a, &b);
    c = add(a,b);
    printf("Answer = %f",c);
    getch();
}

float add(float x , float y)
{
    return (x+y);
}
