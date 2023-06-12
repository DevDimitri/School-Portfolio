#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int nf;
	printf("SAIBA QUAL O CONCEITO DA SUA NOTA");
	printf("\nDigite sua Nota: ");
	scanf("%d", &nf);
	
	if((nf >= 0) && (nf < 3)){
		printf("\nConceito do Aluno(a): E");
	}
		else if((nf >=3) && (nf <= 5)){
		printf("\nConceito do Aluno(a): D");
	}
		else if((nf >= 6) && (nf <= 7)){
		printf("\nConceito do Aluno(a): C");
	}
		else if((nf >= 8) && (nf <= 9)){
		printf("\nConceito do Aluno(a): B");
	}
		else if(nf = 10){
		printf("\nConceito do Aluno(a): A");
	}
		else{
		printf("\nConceito Inexistente!");
	}
	printf("\n");
	system("pause");
	system("cls");
}
