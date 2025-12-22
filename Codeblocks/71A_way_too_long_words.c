#include <stdio.h>

void longwords(int);

int main()
{
    int n, i;
    scanf("%d",&n);
    getchar();
    longwords(n);
    return 0;
}

void longwords(int x)
{
    int i,j,len=0;
    char str[x][101],tempstr[101];
    for(i=0;i<x;i++)
    {
        gets(str[i]);
    }
        
    for(i=0;i<x;i++)
    {
            len = 0;
            for(j=0;str[i][j]!='\0';j++)
            {
               
                len++;
            }
            
            
            if(len>10)
            {
                sprintf(tempstr,"%c%d%c",str[i][0],len-2,str[i][len-1]);
                puts(tempstr);
            }
            else
                puts(str[i]);
        
    }
}