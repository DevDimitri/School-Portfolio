#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int l, per, ar;
	printf("ETEC SEBRAE");
	printf("\nVEJA A ÁREA E O PERÍMETRO DO QUADRADO");
	printf("\n");
	printf("\nDigite tamanho de um lado do QUADRADO: ");
	scanf("%d", &l);
	ar = (l * l);
	per = (l * 4);
	printf("\n");
	printf("\nA Área do QUADRADO é: %d", ar);
	printf("\nO Perímetro do QUADRADO é: %d", per);
	printf("\n\n\n");
	system("\npause");
	system("cls");
}
