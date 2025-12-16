#include <stdio.h>

int main()
{
    int i = 0, n;
    char name[64];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("Enter how many times you want your name to be printed: ");
    scanf("%d", &n);

    while(i<n)
    {
        printf("%s",name);
        i++;
    }
    return 0;
}