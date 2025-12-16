#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    void swapp(int, int);
    printf("\nEnter any 2 numbers: ");
    scanf("%d %d",&a,&b);
    swapp(a,b);
    getch();
    return 0;
}

void swapp(int x, int y)
{
    int t;
    t = x;
    x = y;
   y = t;
    printf("%d %d",x,y);
}
