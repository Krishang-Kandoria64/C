#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    void add(int, int);
    printf("\nEnter any 2 numbers: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    getch();
    return 0;
}

void add(int x, int y)
{
    int z;
    z = x + y;
    printf("Answer = %d", z);
}
