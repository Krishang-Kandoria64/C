#include <stdio.h>
#include <conio.h>

int main(){
    int a[5];
    int i = 0;
    printf("Enter any five values: ");
    for(i = 0; i<5; i = i + 1)
        scanf("%d", &a[i]);
    printf("Original Array: ");
    for(i=0; i < 5; i = i + 1)
        printf("%d ", a[i]);
    for(i =0; i<4; i = i + 1)
        for(int j = i + 1; j<5; j = j + 1)
            if(a[i]> a[j]){

                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    printf("\nSorted Array: ");
    for(i=0; i<5; i = i + 1)
        printf("%d ", a[i]);
    return 0;
}
