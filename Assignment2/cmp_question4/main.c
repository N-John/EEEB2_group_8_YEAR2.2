#include <stdio.h>
#include <stdlib.h>

int main(void){
    char n[] = "0123456789";
    int c = 0;
    for (c = 0;c < 10; c++){
        putchar(n[c]);
        printf("\n", c);
    }
    return 0;
}
