/* ler dois valores inteiros da variavel A e B
Troque o valor da varialvel A para B
Troque o valor da varialvel B para A */ 

#include <stdio.h>
#include <stdlib.h>

int main(){

 	int a, b, c;
 	a = 12;
 	b = 23;
 	c = 0;
 	printf("Valor da variavel A: %d",a);
 	printf("\nValor da variavel B: %d",b);
 	printf("\n");
	printf("\nTroca de valores");
	c = a;
	a = b;
	b = c;
	printf("\nValor da variavel A: %d",a);
	printf("\nValor da variavel B: %d",b);
	printf("\n");
	system("pause");
}
