
/*
3. Write a program that prints the alphabet in lowercase, followed by a new line.
    � Print all the letters except q and e
    � You can only use the putchar function (every other function (printf, puts, etc�) is
    forbidden)
    � All your code should be in the main function
    � You can only use putchar twice in your code
 The code below answers the question above
*/
//Starting position
int main()
{
   char start='a';
   char end='z';
   while (start<=end){
        //check if start is either q or e
        if (start=='q' || start =='e'){
            start++;

            continue;
        }

        putchar(start);
        start++;
        }

   putchar('\n');
   return 0;
}
