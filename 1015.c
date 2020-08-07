#include<stdio.h>
#include<stdlib.h>

int main() {
	
	float x1, x2, y1, y2, dstx, dsty, raiz, ext;
	
	scanf("%f", &x1);
	scanf("%f\n", &y1);
	scanf("%f", &x2);
	scanf("%f\n", &y2);
	
	dstx = x2 + x1;
	dsty = y2 + y1;
	raiz = (dstx*dstx + dsty*dsty);
	//ext = raiz / raiz;
	printf("%.4f\n", raiz);
	
	return 0;
}
