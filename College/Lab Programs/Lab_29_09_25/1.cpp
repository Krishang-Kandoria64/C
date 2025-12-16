#include <stdio.h>

int main(){
    int *p, a[5], i;
    p = a;
    printf("Enter any 5 values:\n ");
    for(i=0;i<5;i++){
        scanf("%d",p);
            p++;
    }
    printf("The 5 values in the array are:\n");
    p = a;
    for(i=0;i<5;i++){
        printf("%d ", *p);
        p++;
    }
    return 0;
}
