#include<stdio.h>

typedef struct person{
	char name[10];
	int age;
} person_t;

int main() {
  // typedef allow us to rename the struct to something more appealing
	// instead of this.
	// struct person paul;
	person_t paul;

	// what follows is a really weird way of initialize a struct member
	paul.name[0] = 'p';
	paul.name[1] = 'a';
	paul.name[2] = 'u';
	paul.name[3] = 'l';
	paul.name[4] = '\0';
	paul.age = 90;

	printf("%s - %d\n", paul.name, paul.age);
	
	return 0;
}
