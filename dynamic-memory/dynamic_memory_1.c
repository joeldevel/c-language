#include<stdio.h>
#include<stdlib.h>

int main() {
	// ask memory for storing 10 ints
	int * array = malloc(sizeof(int) * 10);
	
	// check malloc succeded
	if(!array) return -1;

	// do something with it
	for(int i = 0; i < 10; i++) {
		*(array + i) = i * i; // this is the same as array[i] = i * i;
		printf("array[%d] = %d\n", i, *(array + i));
	}

	// we must free the memory we were given
	free(array);
	return 0;
}
