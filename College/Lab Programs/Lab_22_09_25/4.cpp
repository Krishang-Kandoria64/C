#include <stdio.h>

int main(){
    int x = 50;
    int * xptr;
    xptr = &x;

    printf("%d\n",x);
    printf("%u\n", xptr);
    printf("%d\n", *xptr);

    return 0;
}
