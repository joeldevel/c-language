#include<stdio.h>
/*
 * compile: $ gcc while.c -o while
 * run    : $ ./while
 */
int main() {

    int limit = 4;
    // A control variable
    int  coins= 0;
    
    while(coins < limit) {
        printf("I have %d coins\n", coins);
        // IMPORTANT: increment the variable
        coins++;
    }

    return 0;
}
