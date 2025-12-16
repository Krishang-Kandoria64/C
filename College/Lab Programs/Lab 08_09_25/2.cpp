#include <stdio.h>
#include <conio.h>

int main(){
    int a[10];
    printf("Enter any ten values: ");
    for(int i = 0; i<10; i = i + 1)
        scanf("%d", &a[i]);
    printf("The values are ");
    printf("%d %d %d\n", a[3], a[6],a[8]);
    return 0;
}
