#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int laidToRest, Cont;
	

	
	for(Cont=1; Cont<=100; Cont++) {
		laidToRest = Cont % 2;
		if(laidToRest==0){
			printf("%i\n", Cont);
		}
		
	}
	
	return 0;
}
