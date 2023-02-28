#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 0;
    int column = 0;
    for(row=1;row<6;row++){
        for(column=0;column<row;column++){
          printf("W ");
        }
        printf("\n");
        }
    return 0;
}
