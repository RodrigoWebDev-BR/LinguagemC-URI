#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int number, cont, qnt;
	
	int in=0;
	int out=0;

	scanf("%i\n", &qnt);

	for(cont=0; cont<=qnt; cont++) {
		scanf("%i\n", &number);
		if(number >=10 && number <= 20) {
			in++;
			
		}
		else{
			out++;
			
		}
		printf("%i in\n",  in);
		printf("%i out\n", out);
	}
	
	return 0;
}
