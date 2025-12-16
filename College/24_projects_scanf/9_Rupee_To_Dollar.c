#include <stdio.h>

int main(){
    float rup, dol;
    printf("Enter the ammount in rupees: ");
    scanf("%f", &rup);
    dol = rup/48;
    printf("%.f rupees are equivalent to %.2f dollars", rup,dol);
    return 0;
}
