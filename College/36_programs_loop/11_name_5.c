#include <stdio.h>

int main()
{
    char name[64];
    int i = 0;
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);

    while(i<5)
    {
        printf("%s", name);
        i++;
    }
    return 0;
}