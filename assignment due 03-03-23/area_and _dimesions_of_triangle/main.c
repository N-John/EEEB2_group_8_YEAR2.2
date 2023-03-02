#include <stdio.h>
#include <stdlib.h>
/*
 write a c program that will accept the dimensions of a rectangle
 and calculate its area through the use of a function. The program
 should then output the dimensions and area in the main prgram.
*/
int main()
{
    int length = 0;
    int hight = 0;
    int area = 0;

    printf("WHAT IS THE LENGTH? ");
    scanf("%d", &length);

    if(length<1){
            printf("LENGTH CANNOT BE %d \n", length);

        }

    printf("WHAT IS THE HIGHT? ");
    scanf("%d",&hight);

    if(hight<1){
        printf("WIDTH CANNOT BE %d \n", hight);
    }



    area = 0.5 * length * hight;

    printf("\nAREA IS %d WITH LENGTH %d AND HIGHT %d \n", area, length, hight);

    return 0;
}
