#include <stdio.h>
#include <stdlib.h>
/*


1. Write a program that prints the alphabet in lowercase, followed by a new line.
abcdefghijklmnopqrstuvwxyz

Code below answers question 1 above;
*/

int main()
{   char start;
    start='a';
    while (start <='z'){
        putchar(start);
        start++;
    }
    return 0;
}
