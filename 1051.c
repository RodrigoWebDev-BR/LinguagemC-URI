#include<stdio.h>
#include<stdlib.h>

int main() {
	
	float sal,desc;
	
	scanf("%f\n", &sal);
	if (sal>=0.00 && sal<= 2000.00) {
		printf("Isento\n");
	}
		else if (/*sal>=2000.01 && */sal<= 3000.00) {
			desc = (sal * 8.0)  / 1000;		
			printf("R$ %.2f\n", desc);
			
		}
			else if (/*sal>=3000.01 && */sal<= 4500.00) {
				desc = (sal * 18.0)  / 1000;				
				printf("R$ %.2f\n", desc);
			}
				else if (sal>= 4500.01) {
					desc = (sal * 28.0)  / 1000;
					printf("R$ %.2f\n", desc);
					}
	
	return 0;
}
