#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration of variables //intialization
    int num=9;//10-1 //total num -1
    int counter=0;
    int total,count;
    total=0;
    while(counter<=num){
        //input
        printf("Enter number %d:\n",counter+1);

        scanf("%d",&count);
        total+=count;
        //counter
        counter++;

        //count=0;
    }

    printf("Total is %d \n",total);
    //average
    printf("Average is %f \n",(float)total/(num+1));
    printf("End\n");
    return 0;
}
