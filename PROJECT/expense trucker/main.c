#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPENSES 1000

//CREATE A STRUCTURE TO HOLD THE VARIABLES
struct Expense {
    int day;
    int month;
    int year;
    float amount;
    char description[100];
};
//STRUCTURE TO HOLD NUMEXPENSES
struct ExpenseTracker {
    struct Expense expenses[MAX_EXPENSES];
    int numExpenses;
};

// CLASS TO ADD EXPENSES
void addExpense(struct ExpenseTracker *tracker, int day, int month, int year, float amount, char *description) {
    if (tracker->numExpenses < MAX_EXPENSES) {
            //RELATE STRUCTURES
        struct Expense *expense = &tracker->expenses[tracker->numExpenses];
        expense->day = day;
        expense->month = month;
        expense->year = year;
        expense->amount = amount;
        strncpy(expense->description, description, sizeof(expense->description));
        tracker->numExpenses++;

        FILE *fp;
        fp = fopen("expenses.txt", "a"); //open file
        fprintf(fp, "%d/%d/%d,%.2f,%s\n", day, month, year, amount, description);//add a string to the file in the format "%d/%d/%d,%.2f,%s\n"
        fclose(fp);//close the file
    } else {
        printf("Error: Maximum number of expenses reached\n");
    }
}

//class to calculate expenses
float calculateTotalExpenses(struct ExpenseTracker *tracker, int month, int year) {
    float total = 0;
    for (int i = 0; i < tracker->numExpenses; i++) {
        if (tracker->expenses[i].month == month && tracker->expenses[i].year == year) {
            total += tracker->expenses[i].amount;
        }
    }
    return total;
}

void printMenu() {
    printf("Expense Tracker Menu\n");
    printf("1. Add Expense\n");
    printf("2. Calculate Total Expenses\n");
    printf("3. Quit\n");
}

int main() {
    struct ExpenseTracker tracker = {{0}, 0};

    // Load expenses from file
    FILE *fp;
    fp = fopen("expenses.txt", "r");//read file and save to fp
    if (fp != NULL) { // check if fp is empty
        char line[256]; //create variable to save strings
        while (fgets(line, sizeof(line), fp) != NULL) {//save values to 'line' , count no of characters in line ' sizeof(line)', get the string from 'fp'
            int day, month, year;
            float amount;
            char description[100];
            sscanf(line, "%d/%d/%d,%f,%[^\n]", &day, &month, &year, &amount, description);// scan 'line' in the format "%d/%d/%d,%f,%[^\n]" and save to variables
            addExpense(&tracker, day, month, year, amount, description); // run addExpense to add changes to file
        }
        fclose(fp); // close file
    }

    int choice;
    do {//init do loop
        printMenu(); // print the menu
        printf("Enter your choice: ");
        scanf("%d", &choice);//scan to get the user choise

        switch (choice) {
            case 1: // if user selects 'Add Expense'
                printf("Add Expense\n");

                // Get expense details from user
                //initiate variables
                int day, month, year;
                float amount;
                char description[100];
                printf("Day: ");
                scanf("%d", &day);//get day
                printf("Month: ");
                scanf("%d", &month);//get month
                printf("Year: ");
                scanf("%d", &year);//get year
                printf("Amount: ");
                scanf("%f", &amount);//get amount
                printf("Description: ");
                scanf("%s", description);

                addExpense(&tracker, day, month, year, amount, description);// run 'addExpense'
                printf("Expense added successfully\n");
                printf("\n");

                break;

            case 2: // if user selects 'Calculate Total Expenses'
                printf("Calculate Total Expenses\n");

                // Get month and year from user
                int calcMonth, calcYear;
                printf("Month: ");
                scanf("%d", &calcMonth);
                printf("Year: ");
                scanf("%d", &calcYear);

                float totalExpenses = calculateTotalExpenses(&tracker, calcMonth, calcYear);
                printf("Total expenses for %d/%d: Ksh%.2f\n", calcMonth, calcYear, totalExpenses);
                printf("\n");
                break;

            case 3:
                printf("Exiting...\n");
                printf("\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 3);//exit code if user exits

    return 0;
}

