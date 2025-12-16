#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("6int.txt","r");

    int i,n;
    for(i=0;i<6;i++)
    {
        fscanf(fptr,"%d",&n);
        printf("%d ", n);
    }
    fclose(fptr);
}