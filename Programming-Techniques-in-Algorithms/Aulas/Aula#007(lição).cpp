/*
	1) Ler um valor e escrever a mensagem � MAIOR QUE 10!
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	printf("Digite o valor para descobrir se � maior que 10: ");
	scanf("%d", &n);
	
	if(n >10){
		//sa�da verdadeira
		printf("� maior que DEZ\n\n\n");
	}
	else{
		printf("N�O � maior que DEZ\n\n\n");
		//sa�da falsa
	}
	system("pause");
	system("cls");
}
