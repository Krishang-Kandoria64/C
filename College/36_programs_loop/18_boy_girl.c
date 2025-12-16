#include <stdio.h>

int main()
{
    char c[50];
    int i, b, g;
    printf("Enter B/b for a boy and G/g for a girl ");

    for(i=0;i<50;i++)
    {
        fgets(c,sizeof(c),stdin);
        if(c[i]=='b' || c[i]=='B')
            b++;
        else 
        if(c[i]=='g' || c[i]=='G')
            g++;
        else
        {
            printf("Wrong input. Program Terminated.");
            break;
        }
    }
    printf("The total number of boys in the class is %d", b);
    printf("The total number of girls in the class is %d", g);
    return 0;
}