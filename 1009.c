#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char nome[30];
	double sal, salfix, vendas;
	
	scanf("%s", &nome);
	scanf("%lf", &salfix);
	scanf("%lf", &vendas);
	
	sal = vendas*0.15 + salfix;
	printf("TOTAL = R$ %.2lf\n", sal);
	
	return 0;
}
