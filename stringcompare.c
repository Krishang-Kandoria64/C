#include <stdio.h>

int main()
{
    int strcmp(char [], char[]);
    char str1[50], str2[50];
    printf("Enter  any two strings to compare:\n ");
    gets(str1);
    gets(str2);
    printf("%d",strcmp(str1,str2));

}

int strcmp(char x[],char y[])
{
    int i;
    for(i=0;x[i] != '\0' && y[i] != '\0'; i++)
    {
        if(x[i]!=y[i])
        {
            break;
        }
    }
        return(x[i]-y[i]);
}