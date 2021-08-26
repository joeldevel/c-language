#include<stdio.h>
/*
 * compile: $ gcc constants -o constants
 * run    : $ ./constants
 */
int main() {
    double const PI = 3.1416;
    printf("Value of PI: %f\n", PI);
    // the next line is illegal. PI is read-only
    // PI = 899;

    #define true 1
    
    // A really trivial example of it usage
    int age = 19;
    int condition = 19 > 10;
    if( condition == true) {
        printf("condition is true\n");
    }
    
    return 0;
}
