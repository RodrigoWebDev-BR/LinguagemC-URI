#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char vertebrado[15], invertebrado[15], ave[15], mamifero[15], inseto[15], anelideo[15], onivoro[15], carnivoro[15], herbivoro[15], hematofogo[15];
	char tipo1[15], tipo2[15], alimento[15];
	
	scanf("%s\n", &tipo1);
	scanf("%s\n", &tipo2);
	scanf("%s\n", &alimento);
	
	if (tipo1 == vertebrado) {
		(tipo2 == ave || tipo2 == mamifero);
		//scanf("%s\n", &tipo2);
			if (tipo2 == ave) {
				(alimento == carnivoro || alimento == onivoro);
				//scanf("%s\n", &alimento);
					if (alimento == carnivoro) {
						printf("aguia\n");
					}
						else {
							printf("pomba\n");
						}
				}
			}
	/*}*/
	
	
	return 0;
}
