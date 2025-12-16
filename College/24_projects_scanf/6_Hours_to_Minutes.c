#include <stdio.h>

int main(){
    int hours, minutes;
    printf("Enter the time in hours: ");
    scanf("%d", &hours);
    minutes = hours * 60;
    printf("%d hours is %d minutes\n", hours,minutes);
    return 0;
}
