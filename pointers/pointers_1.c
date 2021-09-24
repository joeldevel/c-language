#include<stdio.h>

int main() {

	int number = 122;
	int *pointer = &number;// *pointer hold the address of number

	// dereferencing the pointer
	printf("%d\n", *pointer); // get the value the pointer points to

	return 0;
}
