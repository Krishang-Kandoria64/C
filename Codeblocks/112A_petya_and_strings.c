#include <stdio.h>


int main()
{
    char s1[100],s2[100];
    
    scanf("%s %s",s1,s2);

    int i,k=0,flag=0;
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]=s1[i] + 32;
            }
    }

    for(i=0;s2[i]!='\0';i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
            {
                s2[i]=s2[i] + 32;
            }
    }

    for(i=0;s2[i]!='\0' && s1[i]!='\0';i++)
    {
        if(s1[i]>s2[i])
        {
            printf("1");
            flag = 64;
            break;
        }
        else 
        if(s1[i]<s2[i])
        {
            printf("-1");
            flag = 64;
            break;
        }
    }
    if(flag==0)
        printf("0");

    return 0;
}

