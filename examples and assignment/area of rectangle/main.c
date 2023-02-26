#include <stdio.h>
#include <stdlib.h>


int area(int l,int w){
    return (l*w);
}
int perimeter(int l,int w){

    return((2*l)+(2*w));
}
int main()
{
    int a;
    int length;
    int width;

    printf("Get Area of rectangle!\n");

    a=perimeter(200,300);
    printf("%d",a);

    return 0;
}
