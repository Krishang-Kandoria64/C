#include <stdio.h>

int main(){
    int dol, rup;
    printf("Enter the ammount in dollars: ");
    scanf("%d", &dol);
    rup = 48 * dol;
    printf("%d dollars are equivalent to %d rupees", dol,rup);
    return 0;
}
