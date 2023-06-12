#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	printf("Qual a Nota do Aluno?: ");
	scanf("%d", &n);
	
	if((n >=0) && (n <=10)){
		printf("Nota Válida!\n\n\n");
	}
	else{
		printf("Nota Inválida\n\n\n");
	}
	system("pause");
	system("cls");
}
