#include <stdio.h>
#include <stdlib.h>
/* group assignment question 5
write a program that prints all the numbers of base 16 in lowercase,followed by a new line
You can only use the putchar function
All your code should be in the main function
You can only use putchar three times in your code */
int main()
{
     int number;
   for(number = 48;number <= 57;number++){
    putchar(number);
   }
   char letter;
   for(letter = 97;letter<=102;letter++){
    putchar(letter);
   }
   putchar('\n');

   //second way of writing
   char number2;
   for(number2='0';number2<='9';number2++){
    putchar(number2);
   }
   char letter2;
   for(letter2='a';letter2<='f';letter2++){
    putchar(letter2);
   }
     putchar('\n');
   return 0;
    }


