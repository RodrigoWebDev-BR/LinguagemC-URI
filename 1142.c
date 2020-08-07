#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int N, Cont, X;
	
	scanf("%i", &N);
	for(Cont=1; Cont<=(4*N-1); Cont+=4) {
		for (X = Cont; X <= Cont+2; X++) {
			printf("%i ", X);
		}
		printf("PUM\n");		
	}
	
	
	return 0;
}
