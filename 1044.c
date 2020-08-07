#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int a, b;
	
	scanf("%i\n", &a);
	scanf("%i\n", &b);
	
	if (b%a == 0 || a%b == 0) {
		printf("Sao Multiplos\n");
	}
		else {
			printf("Nao sao Multiplos\n");
		}
	
	return 0;
}
