#include <stdio.h>

int main()
{
    char lexico(char []);
    char strlwr(char []);
    char str[50];
    printf("Enter any string");
    fgets(str,sizeof(str),stdin);
    FILE *fptr;
    fptr = fopen("arraysort.txt","a");
    fprintf(fptr,"Original string %s.\n Sorted Array %s. ", str,str);
    fclose(fptr);
}


char strlwr(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        return str[i];
    }
}