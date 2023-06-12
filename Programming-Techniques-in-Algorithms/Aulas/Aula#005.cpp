#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Olá Mundo!\n\n\n");
	system("pause");
	system("cls");//limpa tela
}
