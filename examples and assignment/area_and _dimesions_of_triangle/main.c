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
    //get length
    printf("WHAT IS THE LENGTH? ");
    scanf("%d", &length);
    //check if length is acceptable
    if(length<1){
            printf("LENGTH CANNOT BE %d \n", length);
        }
    // get height
    printf("WHAT IS THE HIGHT? ");
    scanf("%d",&hight);
    //check if height is feasable
    if(hight<1){
        printf("WIDTH CANNOT BE %d \n", hight);
    }
    //calculate area
    area = 0.5 * length * hight;
    // print error
    printf("\nAREA IS %d WITH LENGTH %d AND HIGHT %d \n", area, length, hight);

    return 0;
}
