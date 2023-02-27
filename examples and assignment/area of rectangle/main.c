#include <stdio.h>
#include <stdlib.h>
/*
Accept Non negative values of length and width
Calculate perimeter and area of rectangle

*/
//area function
int area(int l,int w){
    return (l*w);
}
//perimeter function
int perimeter(int l,int w){

    return((2*l)+(2*w));
}
//start
int main()
{
    //
    int a,p;
    int length;
    int width;
    //main loop for program
    do{

        printf("Get Area of rectangle!\n");
        printf("Length: ");
        //input values
        scanf("%d",&length);
        printf("Width: ");
        scanf("%d",&width);
        //check if values are positive
        if (length>0& width>0){
            a=area(length,width);
            p=perimeter(length,width);
            printf("the Area is %d \n",a);
            printf("the Perimeter is %d \n",p);
            }
        }
        //run loop again
    while(1);
    return 0;
}
