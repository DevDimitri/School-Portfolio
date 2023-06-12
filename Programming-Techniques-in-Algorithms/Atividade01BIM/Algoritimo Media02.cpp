#include <stdio.h>
#include <stdlib.h>

int main(){
	float x, y, z, media;
	media = 0;
	printf("Calcule sua Media");
	printf("\n");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &x);
	printf("Digite o segundo valor: ");
	scanf("%f", &y);
	printf("Digite o terceiro valor: ");
	scanf("%f", &z);
	media = ((x + y + z) /3);
	printf("\nO Resultado da Media sera %2.f \n", media);
	system("pause");
}
