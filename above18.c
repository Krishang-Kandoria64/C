#include <stdio.h>

int main()
{   
    int above18(int);
    int a[10],i;
    printf("Enter age of 10 voters:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<10;i++)
    {
        above18(a[i]);
    }

}

int above18(int x)
{
    if(x>=18)
        printf("Eligible.\n");
    else
        printf("Not Eligible.\n");
}

