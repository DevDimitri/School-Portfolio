#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int alo, ala;
	printf("ETEC SEBRAE");
	printf("\nDADOS DE ALUNOS E ALUNAS DA SALA 101");
	printf("\n\n\nDigite quantos Alunos há na Sala101: ");
	scanf("%d", &alo);
	printf("\nDigite quantos Alunas há na Sala101: ");
	scanf("%d", &ala);
	printf("\n%d Alunos e ", alo);
	printf("%d Alunas", ala);
	printf("\n\n\n");
	system("\npause");
	system("cls");
}
