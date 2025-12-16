#include <stdio.h>
#include <conio.h>

int main()
{
    float c;
    float add(void);
    c = add();
    printf("Answer = %f", c);
    getch();
}

float add(void)
{
    float x,y,z;
    printf("\nEnter any 2 numbers: ");
    scanf("%f %f", &x, &y);
    z = x + y;
    return z;
}
