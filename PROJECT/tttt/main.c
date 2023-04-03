#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPENSES 100

struct Expense {
    int day;
    int month;
    int year;
    float amount;
    char description[100];
};

struct ExpenseTracker {
    struct Expense expenses[MAX_EXPENSES];
    int numExpenses;
};

void addExpense(struct ExpenseTracker *tracker, int day, int month, int year, float amount, char *description) {
    if (tracker->numExpenses < MAX_EXPENSES) {
        struct Expense *expense = &tracker->expenses[tracker->numExpenses];
        expense->day = day;
        expense->month = month;
        expense->year = year;
        expense->amount = amount;
        strncpy(expense->description, description, sizeof(expense->description));
        tracker->numExpenses++;

        FILE *fp;
        fp = fopen("expenses.txt", "a");
        fprintf(fp, "%d/%d/%d,%.2f,%s\n", day, month, year, amount, description);
        fclose(fp);
    } else {
        printf("Error: Maximum number of expenses reached\n");
    }
}

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
    fp = fopen("expenses.txt", "r");
    if (fp != NULL) {
        char line[256];
        while (fgets(line, sizeof(line), fp) != NULL) {
            int day, month, year;
            float amount;
            char description[100];
            sscanf(line, "%d/%d/%d,%f,%[^\n]", &day, &month, &year, &amount, description);
            addExpense(&tracker, day, month, year, amount, description);
        }
        fclose(fp);
    }

    int choice;
    do {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Add Expense\n");

                // Get expense details from user
                int day, month, year;
                float amount;
                char description[100];
                printf("Day: ");
                scanf("%d", &day);
                printf("Month: ");
                scanf("%d", &month);
                printf("Year: ");
                scanf("%d", &year);
                printf("Amount: ");
                scanf("%f", &amount);
                printf("Description: ");
                scanf("%s", description);

                addExpense(&tracker, day, month, year, amount, description);
                printf("Expense added successfully\n");
                printf("\n");

                break;

            case 2:
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

    } while (choice != 3);

    return 0;
}

