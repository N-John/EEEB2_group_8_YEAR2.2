#include <stdio.h>
#include <stdlib.h>
/*
Develop an expense tracker

    Write expenses
    Log expense
    Statistic
        Average expenditure/input
        Max/min expenditure/input
Advice on expenditure
    Thresholds setting
Include features such as M-Pesa integration and the ability to record cash transactions manually

    Record entering manually (linked to no 1)
    Mpesa integrations unavailable
Ensure that the program is user-friendly and easy to use

    linked to number 1 and 2
Ensure that the program is secure, reliable, and scalable and that it can support a large number of users

    encryption
Pleasure the impact of the program on SMEs in terms of improved financial management, increased profitability, and greater access to financing.
    testing

*/



//THIS FILE OFFERS REFENCE TO VARIOUS FUNCTIONS NECESSARY

//CHANGES ARE
/*
void encrypt{


}
void decrypt{


}
*/
//new
/*
#include <stdio.h>
#include <time.h>

int main() {
  FILE *fp;
  char entry[1000];
  time_t current_time;

  // Open log file in append mode
  fp = fopen("log.txt", "a");

  // Get current time
  time(&current_time);

  // Prompt user for log entry
  printf("Enter log entry: ");
  fgets(entry, 1000, stdin);

  // Write entry to log file
  fprintf(fp, "%s - %s", asctime(localtime(&current_time)), entry);

  // Close log file
  fclose(fp);

  return 0;
}

*/

FILE *fp;



void  give_Advice(){


}
void create_file(){
    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

}
void write_expenses{
    fp = fopen("test.txt","w+");
    fputs("This is a new line after editing\n", fp);
    fclose(fp);


}
void get_expenses{

    // Reading a file
    char buff[255];
    fp = fopen("test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff );

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);


}
void statistics{


}

int main()
{
    printf("Hello world!\n");
    return 0;
}
