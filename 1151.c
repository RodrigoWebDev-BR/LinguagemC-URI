#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int f1, f2, number, cont, rest;
	f1 = 0;
	f2 = 1;
	
	scanf("%i", &number);
	printf("%i %i ", f1, f2);
	for(cont=0; cont<number; cont++) {
		rest = f1 + f2;
		f1 = f2;
		f2 = rest;
		printf("%i ", rest);
	}
	printf("\n");

	return 0;
}
