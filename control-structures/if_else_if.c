#include<stdio.h>
/*
 * compile: $ gcc if_else_if.c -o if_else_if
 * run    : $ ./if_else_if
 */
int main() {
    int  money = 100;
    if(money > 200) {
      printf("got a lot of money!\n");
    } else if( money > 150) {
        printf("got some money!\n");
    } else {
        printf("I'm broke\n");
    }
    return 0;
}
