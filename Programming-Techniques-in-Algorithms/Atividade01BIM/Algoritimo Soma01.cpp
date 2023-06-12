#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, soma;
	soma = 0;
	printf("Calcule a Soma de dois Numeros");
	printf("\n");
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &x);
	printf("O valor digitado foi: %d", x);
	printf("\nDigite o segundo valor:");
	scanf("%d", &y);
	printf("O valor digitado foi: %d", y);
	soma = x + y;
	printf("\n");
	printf("\nO Resultado da soma sera %d \n", soma);
	system("pause");
}
