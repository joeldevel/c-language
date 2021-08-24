#include<stdio.h>
/*
 * compile: $ gcc if_else.c -o if_else
 * run    : $ ./if_else
 */
int main() {
    if(1==0) {
      printf("condition is true\n");
    } else {
        printf("condition is false");
    }
    return 0;
}
