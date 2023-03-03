#include <stdio.h>
#include <stdlib.h>
/*program that accepts student names and marks and further more finds average of there marks*/

int main()
{
    while(1){
    //name
    char name[20];
    //marks
    int science,math,english,total;


    //input
    printf("Enter student name :");
    scanf("%s",&name);

    printf("Enter student marks \n");
    printf("Science :");
    scanf("%d",&science);
    printf("Math :");
    scanf("%d",&math);
    printf("English :");
    scanf("%d",&english);
    //find average of marks
    total=(science+math+english);
    printf(" Average for, %f \n",total/(float)3);


    printf("End \n");
    }
    return 0;
}

