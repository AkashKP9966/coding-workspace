#include <stdlib.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[20];
    int marks;
} student1, student2;

int main()
{
    printf("Enter the rollno \n");
    scanf("%d", &student1.rollno);
    printf("Enter the name \n");
    scanf("%s", student1.name);
    printf("Enter the marks \n");
    scanf("%d", &student1.marks);

    printf("Enter the rollno \n");
    scanf("%d", &student2.rollno);
    printf("Enter the name \n");
    scanf("%s", student2.name);
    printf("Enter the marks \n");
    scanf("%d", &student2.marks);

    printf("Rollno. %d name %s totalmarks: %d \n",student1.rollno,student1.name,student1.marks);
    


    getch();
    return 0;
}