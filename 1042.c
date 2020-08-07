#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int a, b, c;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if ((a > b && a > c) && (b > c)) {
		printf("%i\n%i\n%i\n", c, b, a);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b, c);
	}
		else if ((a > b && a > c) && (c > b)) {
		 	printf("%i\n%i\n%i\n", b, c, a);
		 	printf("\n");
		 	printf("%i\n%i\n%i\n", a, b, c);
		}
	 	else if ((b > a && b > c) && (c > a)) {
	 		printf("%i\n%i\n%i\n", a, c, b);
	 		printf("\n");
	 		printf("%i\n%i\n%i\n", a, b, c);
		}
		else if ((b > a && b > c) && (a > c)) {
	 		printf("%i\n%i\n%i\n", c, a, b);
	 		printf("\n");
	 		printf("%i\n%i\n%i\n", a, b, c);
		}		
		else if ((c > b && c > a) && (a > b)) {
		 	printf("%i\n%i\n%i\n", b, a, c);
		 	printf("\n");
		 	printf("%i\n%i\n%i\n", a, b, c);
		}
		else if ((c > b && c > a) && (b > a)) {
		 	printf("%i\n%i\n%i\n", a, b, c);
		 	printf("\n");
		 	printf("%i\n%i\n%i\n", a, b, c);
		}
		 	 	
	return 0;
}
