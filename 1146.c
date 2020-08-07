#include<stdio.h>
#include<stdlib.h>

int main() {

int number, cont;

	
while(1){
		scanf("%i",&number);
		if(number==0) break;
		for(cont=1; cont<=number-1; cont++){
			printf("%d ",cont);
		}
		printf("%d\n",number);
	}

return 0;	

}
		
