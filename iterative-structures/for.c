#include<stdio.h>
/*
 * compile: $ gcc for.c -o for
 * runt   : $ ./for
 */
int main() {
  
    // Trivial example
    // Let's say I earn 100 a day
    int const day_payment = 100;
  
    int amount = 0;
    // Print the amount each day and the accumulated amount
    printf("day\tamount\tacc\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\n",i+1, day_payment, amount+=day_payment);
    }

    return 0;
}
