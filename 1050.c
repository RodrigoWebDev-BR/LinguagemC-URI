#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int number;

	scanf("%i", &number);
	
	if (number==11){
		printf("Sao Paulo\n");
	}
	else if (number==21){
		printf("Rio de Janeiro\n");
	}
		else if (number==61){
		printf("Brasilia\n");
	}
		else if (number==71){
		printf("Salvador\n");
	}
		else if (number==32){
		printf("Juiz de Fora\n");
	}
		else if (number==31){
		printf("Belo Horizonte\n");
	}
		else if (number==27){
		printf("Vitoria\n");
	}
		else if (number==19){
		printf("Campinas\n");
	}	
	/*	else if (number==9){
		printf("September\n");
	}
		else if (number==10){
		printf("October\n");
	}
		else if (number==11){
		printf("November\n");
	}*/
		else {
		printf("DDD nao cadastrado\n");
	}

	return 0;
}
