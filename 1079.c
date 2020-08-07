#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int N, Cont;
	float n1, n2, n3, mdf;
	
	scanf("%i", &N);
	
	for(Cont=0; Cont<=N; Cont++) {
		scanf("%f %f %f", &n1, &n2, &n3);
		mdf=(n1*0.20+n2*0.30+n3*0.50);
		printf("%.1f\n", mdf);
	}
//	printf("\n");
	
	
	return 0;
}
