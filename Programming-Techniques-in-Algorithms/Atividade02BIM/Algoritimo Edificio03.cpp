#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, h, ce, cp, s, div;
	printf("Informe sua altura: ",a);
	scanf("%f", &a);
	printf("\nInforme o comprimento da sua sombra no chao: ",cp);
	scanf("%f", &cp);
	printf("Informe o comprimento da sombra do chao do edificio: ", ce);
	scanf("%f", &ce);
	div = ce / cp;	
	h = div * a;
	printf("\nAltura do edificio: %f", h);
	printf("\n");
	system("pause");
	
}
