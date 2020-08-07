#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int ano, mes, dia, idade;
	
	scanf("%i", &idade);
	
	ano = idade /365;

    mes = idade % 365 / 30;

    dia = idade % 365 % 30;
		
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", ano, mes, dia);
	
	return 0;
}
