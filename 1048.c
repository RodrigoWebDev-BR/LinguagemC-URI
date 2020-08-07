#include<stdio.h>
#include<stdlib.h>

int main() {
	
	float sal, nsal, reaj;
	
	scanf("%f\n", &sal);
	if (sal>=0 && sal<= 400.00) {
		reaj = (sal * 15.0) / 100;
		nsal  = reaj + sal;
		printf("Novo salario: %.2f\n", nsal);				
		printf("Reajuste ganho: %.2f\n", reaj);
		printf("Em percentual: 15 %%\n");
	}
		else if (sal>=400.01 && sal<= 800.00) {
			reaj = (sal * 12.0)  / 100;		
			nsal  = reaj + sal;
			printf("Novo salario: %.2f\n", nsal);					
			printf("Reajuste ganho: %.2f\n", reaj);
			printf("Em percentual: 12 %%\n");
		}
			else if (sal>=800.01 && sal<= 1200.00) {
				reaj = (sal * 10.0)  / 100;		
				nsal  = reaj + sal;
				printf("Novo salario: %.2f\n", nsal);					
				printf("Reajuste ganho: %.2f\n", reaj);
				printf("Em percentual: 10 %%\n");
			}
				else if (sal>=1200.01 && sal<= 2000.00) {
					reaj = (sal * 07.0)  / 100;		
					nsal  = reaj + sal;
					printf("Novo salario: %.2f\n", nsal);					
					printf("Reajuste ganho: %.2f\n", reaj);
					printf("Em percentual: 7 %%\n");
				}
					else if (sal>= 2000.01) {
						reaj = (sal * 04.0)  / 100;		
						nsal  = reaj + sal;
						printf("Novo salario: %.2f\n", nsal);					
						printf("Reajuste ganho: %.2f\n", reaj);
						printf("Em percentual: 4 %%\n");
					}
	
	return 0;
}
