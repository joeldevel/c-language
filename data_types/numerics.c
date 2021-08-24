#include<stdio.h>
/*
 * compile: $ gcc numerics.c -o numerics
 * run    : $ ./numerics
 */
int main() {
    char tiny_number = 1;
    printf("sizeof a char: %d byte\n", sizeof(char));
    printf("sizeof a short: %d byte\n", sizeof(short));
    printf("sizeof an int: %d byte\n", sizeof(int));
    printf("sizeof a long: %d byte\n", sizeof(long));
    return 0;
}
