#include <stdio.h>
#include <stdlib.h>
/*
  GROUP 8 ASSIGNMENT 2

 4) write a program that prints all single digit numbers of base 10 starting from 0,
    followed by new line
    .ALL YOUR CODE SHOULD BE IN THE (main) FUNCTION
*/

int main(void){                    //begin main
    int c = 0;                     //initialize the number

    while(1){                      //introduce a loop to cycle through all numbers
            printf("%d", c);       //print decimal digits beginning from c = 0
            if(c >= 9){            //since there is no single digit above 9
                printf("\n");      //introduce new line
                break;             //stop the infinite loop
            }else{
            c++;                   // add a digit if the number is still single digit
            }
    }
    return 0;                      // end
}
