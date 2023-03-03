#include <stdio.h>
#include <stdlib.h>
/*program that accepts student names and marks and further more finds average of there marks*/

int main()
{
    //name
    char name[20];
    //marks
    int science,math,english,total;


    //input
    printf("Enter your name :");
    scanf("%s",&name);

    getch();
    printf("Enter your marks \n");
    printf("Science :");
    scanf("%d",&science);
    printf("Math :");
    scanf("%d",&math);
    printf("English :");
    scanf("%d",&english);
    //find average of marks
    total=(science+math+english);
    //printf("Your name is %s \n",name );
    //output
    printf("%s has an average of %f \n",name,total/(float)3);
    //end

    printf("End");

    return 0;
}

