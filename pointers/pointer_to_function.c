#include <stdio.h>

int add_one(int x) { return x + 1; }
int multiply_by_two(int x) { return x * 2; }
int print(int x) { printf("%d, ", x); return x;}

// apply receives a function and applies it to each element of the array.
// we can pass any function that has the same signature:
// f has to receive an integer and return and integer
void apply(int array[], size_t length, int(*f)(int x)) {
	for(int i = 0; i < length; i++)
		array[i] = f(array[i]);
}

int main() {
	
	int a[] = {1, 2, 3, 4, 5 };

	for(int i = 0; i< 5; i++)
		printf("%d, ", a[i]);
	printf("\n\n------ adding 1 ----\n");

	// just pass the name of the function
	apply(a, 5, add_one);


	for(int i = 0; i< 5; i++)
		printf("%d, ", a[i]);
	printf("\n\n------ multiplying by two ----\n");

	apply(a, 5, multiply_by_two);

	//for(int i = 0; i< 5; i++)
	//	printf("%d, ", a[i]);
	apply(a, 5, print);
	printf("\n");


	return 0;
}
