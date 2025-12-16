#include <stdio.h>

typedef struct 
{
    char name[50];
    char rollno[10];
    int age;
    char branch[20];
    int division;
} student;

void studentinfo(student *s);
int infofile(student s);

int main()
{
    student s1;
    studentinfo(&s1);
    infofile(s1);
}

void studentinfo(student *x)
{   
  
    printf("Enter the student's name: ");
    gets(x->name);

    printf("Enter the student's roll number: ");
    gets(x->rollno);

    printf("Enter the student's age: ");
    scanf("%d",&x->age);
    getchar();

    printf("Enter the student's branch: ");
    gets(x->branch);

    printf("Enter the student's division: ");
    scanf("%d", &x->division);
    getchar();
}

int infofile(student x)
{
    
    FILE *fptr;

    
    fptr = fopen("studentinfo.txt","w");

    if(fptr==NULL)
    {
        printf("Error in opening the file!\n");
        return 1;
    }

    fprintf(fptr,"Name: %s\n", x.name);
    fprintf(fptr,"Roll Number: %s\n", x.rollno);
    fprintf(fptr,"Age: %d\n", x.age);
    fprintf(fptr,"Branch: %s\n", x.branch);
    fprintf(fptr,"Division: %d\n", x.division);

    fclose(fptr);
}

