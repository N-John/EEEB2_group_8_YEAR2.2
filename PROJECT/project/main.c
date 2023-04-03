#include <stdio.h>
#include <time.h>
#include <string.h>
/*
Develop an expense tracker

    Write expenses --done
    Log expense --done
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



//THIS FILE OFFERS REFERENCE TO VARIOUS FUNCTIONS NECESSARY

//CHANGES ARE
/*
void encrypt{


}
void decrypt{


}
*/



FILE *fp;
char * text;
float average_depo,average_spend,max_spend,min_spend,max_depo,min_depo;
void  give_Advice(){


}
void write_expenses(char * text){
    printf("here");
      time_t current_time;

    // Get current time
    time(&current_time);
    fp = fopen("test.txt","a");
    // Write entry to log file
    fprintf(fp, "%s%s", asctime(localtime(&current_time)), text);
   
    //fputs(text, fp);
    fclose(fp);


}
void get_expenses(){
    //char log_out [10000000];
    // Reading a file
    char buff[255];
    fp = fopen("test.txt", "r");


    // Read the content and print it
    while(fgets(buff, 100, fp)) {
    printf("%s", buff);
    }
    fclose(fp);


}
void statistics(char * string){
    //get deposits and spends
    char * token = strtok(string, " ");
   // loop through the string to extract all other tokens
   while( token != NULL ) {
      printf( " %s\n", token ); //printing each token
      token = strtok(NULL, " ");
   }
   return 0;
    //average
    
    //max
    //min
}
int main(int argc,char* argv[])
{
    for (int i = 0; i < argc; i++) {
        printf("%s %d\n", argv[i],i);
    }
    printf("Hello world!\n");
    //case operator
    //deposit
     printf("%s\n", argv[1]);
    if (!strcmp(argv[1] , "deposit")){
        text=strcat(argv[2]," Deposit \n");
        printf("%s",text);
        write_expenses(text);
    }
    //spend
    if (!strcmp(argv[1] , "spend")){
        text=strcat(argv[2]," Spend \n");
        printf("%s",text);
        write_expenses(text);
    }
    //logs
    if (!strcmp(argv[1] , "log")){
        get_expenses();
        
    }

    


    printf("Hello world!\n");
    return 0;
}
