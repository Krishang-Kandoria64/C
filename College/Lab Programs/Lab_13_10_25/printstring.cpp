#include <stdio.h>

int main()
{
    void printstring(void);
    int i;
    printstring();
    return 0;
}

void printstring()
{
    char name[] = "abcd";
    char * ptr = name;

    while (*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    printf("Length of the string is %d", ptr-name);
}
