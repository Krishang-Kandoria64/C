#include <stdio.h>
#include <conio.h>

int main(){
    int i,j,a[2][2],b[2][2],c[2][2];

    printf("Enter the values for the first matrix: ");
    for(i=0; i<2; i = i + 1)
        for(j=0; j<2; j = j + 1)
            scanf("%d", &a[i][j]);

    printf("Enter the values for the second matrix: ");
    for(i=0; i<2; i = i + 1)
        for(j=0; j<2; j = j + 1){
            scanf("%d", &b[i][j]);
            c[i][j]= a[i][j] + b[i][j];
        }

    printf("First Matrix\n");
    for(i=0; i<2; i = i + 1){
        for(j=0; j<2; j = j + 1)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Second Matrix\n");
    for(i=0; i<2; i = i + 1){
        for(j=0; j<2; j = j + 1)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    printf("Sum of both matrices\n");
    for(i=0; i<2; i = i + 1){
        for(j=0; j<2; j = j + 1)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
