#include <stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int nat(int);
    nat(n);
}

int nat(int x)
{
    x==0?0:(nat(x-1), printf("%d ",x));
}
