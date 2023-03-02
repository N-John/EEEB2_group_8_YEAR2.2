/*
  write a c program to read a lowercase character
  and display its uppercase equivalent

*/
#include <ctype.h>
#include <stdio.h>

int main()
{
	int x = 0;                         //to count length of word
	char lower[] = "input";
	char change;
    //get input
	printf("INPUT YOUR WORD __");
    scanf("%s", &lower);

	while (lower[x]) {                 //open while loop
		change = lower[x];             //relate each character to change
		putchar(toupper(change));      //use toupper()toconvert lowercase to uppercase
		x++;                           //increase count by 1
	}

	return 0;
}
