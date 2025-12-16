#include <stdio.h>
#include <conio.h>

int main(){
    int b;
    float kb,mb,gb;
    printf("Enter the size in bytes: ");
    scanf("%d", &b);
    kb = b/1024.0;
    mb = b/1024.0/1024.0;
    gb = b/1024.0/1024.0/1024.0;
    printf("%d bytes are equal to %.3f kilobytes: \n", b,kb);
    printf("%d bytes are equal to %.6f megabytes: \n", b,mb);
    printf("%d bytes are equal to %.9f gigabytes: \n", b,gb);
    getch();
    return 0;
}