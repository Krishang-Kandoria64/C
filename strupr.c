#include <stdio.h>

int main()
{
    int i;
    void strlwr(char[]);
    char string[1030];
    printf("Enter a string: ");
    gets(string);
    strlwr(string);
}

void strlwr(char x[])
{
    int i;
      for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;    
        }
    }
    puts(x);
}