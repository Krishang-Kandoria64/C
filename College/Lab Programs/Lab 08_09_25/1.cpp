#include <stdio.h>
#include <conio.h>

int main(){
    int a[5];
    int i = 0;
    printf("Enter any five values: ");
    for(i = 0; i<5; i = i + 1)
        scanf("%d", &a[i]);
    printf("The values are ");
    for(i=0; i<5; i = i + 1)
        printf("%d ", a[i]);
    return 0;
}
