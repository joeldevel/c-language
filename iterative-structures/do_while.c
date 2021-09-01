#include<stdio.h>
/*
 * compile: $ gcc do_while.c -o do_while
 * run    : $ ./do_while
 */
int main() {
		/* do while loop runs at least once*/
    int limit = -1;
    // A control variable
    int  coins= 0;
    do {
        printf("I have %d coins\n", coins);
        // IMPORTANT: increment the variable
        coins++;
    } while(coins < limit);

    return 0;
}