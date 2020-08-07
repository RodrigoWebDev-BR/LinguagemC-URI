#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int a, b, c;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if (a > b && a > c) {
		printf("%i eh o maior\n", a);
	}
	 	else if (b > a && b > c) {
	 		printf("%i eh o maior\n", b);
		 }
		 else
		 	printf("%i eh o maior\n", c);
	
	return 0;
}
