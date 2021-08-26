#include<stdio.h>
/*
 * compile: $ gcc arrays_1.c -o arrays_1
 * run    : $ ./arrays_1
 */
int main() {
    int const DAYS = 7;

    int worked_hours[DAYS];
    worked_hours[0] = 6;
    worked_hours[1] = 7;
    worked_hours[2] = 8;
    worked_hours[3] = 5;
    worked_hours[4] = 6;
    worked_hours[5] = 4;
    worked_hours[6] = 0;

    int total_worked_hours = 0;
    for(int i=0; i< DAYS; i++) {
        total_worked_hours += worked_hours[i];
    }

    printf("total hours worked: %d\n", total_worked_hours);

    return 0;
}

