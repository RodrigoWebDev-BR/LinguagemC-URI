#include<stdio.h>
#include<stdlib.h>

int main() {

float n1, n2, mdf;

do{
	
	scanf("%f", &n1);
		if (n1<0 || n1 >10){
			printf("nota invalida\n");
		}
	}while(n1<0 || n1>10);
	
	do{
		scanf("%f", &n2);
		if (n2 <0 || n2 > 10){
			printf("nota invalida\n");
		}
	}while(n2<0 || n2>10);
	
	mdf = (n1 + n2)/2;
	printf("media = %.2f\n", mdf);
	             
  return 0;
}

