#include<stdio.h>

struct point {
    double x, y;
}; // don't forget the ';' !

int main() {
    struct point a_point;

    // set members' values
    a_point.x = 1;
    a_point.y = 2;

    printf("Coodinates of a_point: (%.2f , %.2f)\n",a_point.x, a_point.y);

    return 0;
}
