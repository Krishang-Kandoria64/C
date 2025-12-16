#include <stdio.h>

void main()
{
int Val=10;
printf("\nValue = %d",Val);
fnIncr(Val);
printf("\nValue = %d",Val);
}

void fnIncr(int Val)
{
Val++;
printf("\nValue = %d",Val);
}
