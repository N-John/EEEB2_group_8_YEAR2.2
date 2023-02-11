#include <stdio.h>
#include <stdlib.h>
/*Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new
line.
• You can only use the putchar function (every other function (printf, puts, etc…) is
forbidden)
• All your code should be in the main function
• You can only use putchar three times in your code


*/
// this is a function that calls the declared functions
int main()
{



//this is a function that prints out lowercase letters

    char start='a';
    char stop ='z';
    while (start<=stop){
        putchar(start);
        start++;
    }


// this is a function that prints out uppercase letters

    char START='A';
    char STOP ='Z';
    while (START<=STOP){
        putchar(START);
        START++;
    }


    putchar('\n');
}
