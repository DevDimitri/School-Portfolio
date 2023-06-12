#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int alo, ala;
	printf("DADOS DE ALUNOS E ALUNAS DA SALA 101");
	printf("\nDigite quantos Alunos há na Sala101: ");
	scanf("%d", &alo);
	printf("\nDigite quantos Alunas há na Sala101: ");
	scanf("%d", &ala);
	printf("%d Alunos e &d Alunas", alo, ala);
	
	printf("\n");
	system("pause");
	system("cls");
}
