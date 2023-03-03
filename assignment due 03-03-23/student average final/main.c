#include <stdio.h>
int main()
{
    char name[20];
    float english, math, science;
    float avg;

    printf("Enter the name of the student: ");
    scanf("%s", name);

    printf("Enter the marks scored in English, Maths and Science: \n");//enter marks in this order English then maths then science
    scanf("%f%f%f", &english, &math, &science);

    avg = (english + math + science) / 3;

    printf("The average mark of %s is %.2f", name, avg);

    return 0;
}
