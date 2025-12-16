#include <stdio.h>

int main(){
    int x = 50;
    int * xptr;
    xptr = &x;

    printf("%d\n",x);
    printf("%u\n", xptr);s
    printf("%d\n", *xptr);

    int ** yptr = & xptr;

    printf("%u\n", yptr);
    printf("%u\n", *yptr);
    printf("%u\n", &yptr);
    printf("%d\n", **yptr);

    return 0;
}
