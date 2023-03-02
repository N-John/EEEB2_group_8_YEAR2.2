/*
  write a c program to read a lowercase character
  and display its uppercase equivalent

*/
#include <ctype.h>
#include <stdio.h>

int main()
{
	int x = 0;
	char lower[] = "input";
	char change;

	printf("INPUT YOUR WORD __");
    scanf("%s", &lower);

	while (lower[x]) {
		change = lower[x];
		putchar(toupper(change));
		x++;
	}

	return 0;
}
