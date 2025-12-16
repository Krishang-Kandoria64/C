#include <stdio.h>

int main(){
    int minutes, hours;
    printf("Enter the time in minutes: ");
    scanf("%d", &minutes);
    hours = minutes/60;
    printf("%d minutes is %d hours\n", minutes,hours);
    return 0;
}
