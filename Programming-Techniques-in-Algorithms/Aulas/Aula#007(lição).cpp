/*
	1) Ler um valor e escrever a mensagem É MAIOR QUE 10!
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	printf("Digite o valor para descobrir se é maior que 10: ");
	scanf("%d", &n);
	
	if(n >10){
		//saída verdadeira
		printf("É maior que DEZ\n\n\n");
	}
	else{
		printf("NÃO é maior que DEZ\n\n\n");
		//saída falsa
	}
	system("pause");
	system("cls");
}
