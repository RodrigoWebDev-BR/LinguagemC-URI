#include<stdio.h>
#include<stdlib.h>

int main() {
	
	double A, B, C, P, AREA;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	if (A < B + C) {
		P = (A * B) / 2;
		printf("Prerimetro = %.1lf", P);
	}
		else if (C < A + B) {
			P = (A * C)  / 2;
			printf("Prerimetro = %.1lf", P);
		}
			else if (B < A + B) {
				P = (B * C)  / 2;
				printf("Prerimetro = %.1lf", P);
			}
			
	
		else if (A > B){
				AREA = (A + B) * C;
				printf("Area = %.1f", AREA);
			}
				else {
					AREA = B * C;
					printf("Area = %.1f", AREA);
				}
			
		
	return 0;
}

