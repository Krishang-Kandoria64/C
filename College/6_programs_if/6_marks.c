#include <stdio.h>
#include <conio.h>

int main(){
    int comp,math,phy,total;
    float average;
    printf("Enter your Computer Programming - I subject marks: ");
    scanf("%d", &comp);
    printf("Enter your Mathematics - I subject marks: ");
    scanf("%d", &math);
    printf("Enter your Applied Physics subject marks: ");
    scanf("%d", &phy);

    total = comp + math + phy;
    average = total/3.00;

    printf("Your have scored %d out of 300\n", total);
    printf("Your average score is %.2f out of 100\n", average);

    if(comp>35 && math>35 && phy>35){
        
        if (average>=70)
        {
            printf("You have passed with distinction class!\n");
        }
        else 
        if (average>=60)
        {
            printf("You have passed with first class!\n");
        }
        else
        if (average>=50)
        {
            printf("You have passed with second class!\n");
        }
        else
            printf("You have passed with third class!\n");

    }
    else
        printf("Unfortunately, you have failed.\n");

    getch();
    return 0;
}