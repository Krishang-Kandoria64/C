#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int i = 0;
    do
    {
        i++;
        printf("%d\n",i);
    } while (i<n);
    getch();
    return 0;
}
