/*
	Neste problema devemos fazer algo 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m, n, v;
	v = 0;
	printf("ALGORITIMO SOMA");
	printf("\nDigite um n�mero: ");
	scanf("&d", &m);
	printf("O valor digitado foi: %d", m);
	printf("Digite outro n�mero: ");
	scanf("&d", &n);
	printf("O valor digitado foi: %d", n);
	v = m + n;
	printf("\nA soma de %d", v);
	
	printf("&d", v);
	system("pause");
	system("cls");
}
