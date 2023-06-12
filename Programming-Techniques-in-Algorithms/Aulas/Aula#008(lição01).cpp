#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int v1, v2, v3, maior;
	printf("Digite o Primeiro Valor: ");
	scanf("%d", &v1);
	printf("\n");
	printf("Digite o Segundo Valor: ");
	scanf("%d", &v2);
	printf("\n");
	printf("Digite o Terceiro Valor: ");
	scanf("%d", &v3);
	printf("\n");
	
	if(v1 >v2 && v1 >v3){
		maior = v1;
	}
	else{
		if(v2>v3){
			maior = v2;
		}
		else{
			maior = v3;
		}
	printf("O  maior Valor é: %d", maior);
}
	printf("\n");
	system("pause");
	system("cls");
}
