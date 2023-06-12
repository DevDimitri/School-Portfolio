#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, p, c, r;
	printf("Digite o raio do circulo: ");
	scanf("%f", &r);
	p = 3.14;
	a = p * r * r;
	printf("Valor da Area: %f", a);
	printf("\n");
	c = 2 * p * r * r;
	printf("\nValor do comprimento: %f", c);
	printf("\npause");
	system("pause");
}
