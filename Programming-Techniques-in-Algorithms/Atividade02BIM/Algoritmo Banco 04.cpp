#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor, dois, cinco, dez, vinte, ciquenta, cem;
	
	printf("Saque");
	printf("\n");
	printf("\nInforma o valor: ");
	scanf("%f", &valor);
	dois= valor / 2;
	cinco= valor / 5;
	dez= valor / 10;
	vinte= valor / 20;
	ciquenta= valor / 50;
	cem= valor / 100;
	
	printf("\nNotas de R$2,00: %2.f",dois);
	printf("\nNotas de R$5,00: %2.f",cinco);
	printf("\nNotas de R$10,00: %2.f",dez);
	printf("\nNotas de R$20,00: %2.f",vinte);
	printf("\nNotas de R$50,00: %2.f",ciquenta);
	printf("\nNotas de R$100,00: %2.f",cem);
	system("pause");
}
