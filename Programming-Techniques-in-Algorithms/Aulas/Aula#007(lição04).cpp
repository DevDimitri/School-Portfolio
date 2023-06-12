#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float n1, n2, nf;
	printf("Digite a Nota  1a do Aluno: ");
	printf("\n");
	scanf("%f", &n1);
	printf("\n");
	printf("Digite a Nota  2a do Aluno: ");
	printf("\n");
	scanf("%f", &n2);
	printf("\n");
	nf = (n1 + n2)/2;
	
	if(nf <= 6){
		printf("O aluno não foi aprovado :( %.2f\n\n", nf);
	}
	else{
		printf("O aluno foi aprovado! %.2f\n\n", nf);
	}
	system("pause");
	system("cls");
}
