#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c;
    do{
        printf("\nEnter any two numbers: ");
        scanf("%d %d", &a,&b);
        printf("%d + %d = %d\n",a,b,a+b);
        printf("press e to continue.");
        c = getch();
    }while(c == 'e', c == 'E');
    getch();
    return 0;

}
