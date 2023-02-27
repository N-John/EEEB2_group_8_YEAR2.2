/*Write a C program to accept the names, marks of a student in programming,
maths and O/S. The program should then calculate the average marks, grade and
give a remark based on the following grading system.
Marks Grade Remark
0 – 39 7 Fail
40 – 59 5 Pass
60 – 79 3 Credit
80 – 100 1 Distinction*/



#include <stdio.h>

int main()
{
    char name[12];
    int programming, maths, os, total;
    float avg;
    char grade;
    char remark[10];

    printf("Enter the name of the student: ");
    scanf("%s", name);

    printf("Enter marks scored in Programming: ");
    scanf("%d", &programming);

    printf("Enter marks scored in Maths: ");
    scanf("%d", &maths);

    printf("Enter marks scored in O/S: ");
    scanf("%d", &os);

    total = programming + maths + os;
    avg = total/3;

    if (avg >= 0 && avg <= 39)
    {
        grade = 7;
        strcpy(remark, "Fail");
    }
    else if (avg >= 40 && avg <= 59)
    {
        grade = 5;
        strcpy(remark, "Pass");
    }
    else if (avg>= 60 && avg <= 79)
    {
        grade = 5;
        strcpy(remark, "credit");
    }
    else if (avg<=0 && avg>=100 ){
        grade=10 ;
        strcpy(remark, "Distinction");
    }

    printf("Name: %s\n", name);
    printf("Average marks: %.2f\n", avg);
    printf("Grade: %d\n", grade);
    printf( avg>= 0 && avg <= 1);
    {
        grade = 3;
        strcpy(remark, "Credit");
    }
    else if
    {
        grade = 1;
"Remark: %s\n", remark);
grade=3
strcpy(remark, "distinction")

    return 0;
}
