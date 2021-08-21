#include<stdio.h>
/*
 * compile: $ gcc variables.c -o variables
 * run    : $ ./variables
 */
int main() {
    /* we must specify the variable's type */
    int amount_of_cats = 3;

    /* %d meand a integer */
    printf("How many cats? %d\n", amount_of_cats);

    return 0;
}
