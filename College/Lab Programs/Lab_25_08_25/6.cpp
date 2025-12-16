#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int i = 0;
    while(i<n)
    {
        i++;
        printf("%d\n",i);
    };
    getch();
    return 0;
}
