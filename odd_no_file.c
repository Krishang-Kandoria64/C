#include <stdio.h>

int main()
{
    void  oddprintfile(int);
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    oddprintfile(n);
}

void oddprintfile(int x)
{
    int i;
    FILE *fptr;
    fptr = fopen("oddnumbers.txt","w");

    if(fptr==NULL)
    {
        printf("Error!");
        return;
    }

    for(i=1;i<=x;i++)
    {
        fprintf(fptr,"%d ", 2*i - 1);
    }
    fclose(fptr);

}