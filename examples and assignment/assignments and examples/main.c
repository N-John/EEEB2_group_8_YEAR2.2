/*Write a C program that uses a function to determine the square of an integer.
The program should display the number and its square.
 */

// Square of an Integer
#include <stdio.h>

int square(int k) {
    return k * k;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The number is %d and the square is %d\n", num, square(num));

    return 0;
}


