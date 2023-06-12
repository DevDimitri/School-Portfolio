#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, s, sub, p, d, m;
	s, sub, p, d, m = 0;
	printf("ETEC SEBRAE");
	printf("\nVEJA A SOMA, A SUBTRAÇÃO, O PRODUTO, A DIVISÃO E A MÉDIA");
	printf("\n");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &n1);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &n2);
	s = n1 + n2;
	sub = n1 - n2 ;
	p = n1 * n2;
	d = n1 / n2;
	m = (n1 + n2) /3;
	printf("\n");
	printf("\nA Soma dos valores é: %f", s);
	printf("\nA Subtração dos valores é: %f", sub);
	printf("\nO Produto dos valores é: %f", p);
	printf("\nA Divisão dos valores é: %f", d);
	printf("\nA Média dos valores é: %f", m);
	printf("\n\n\n");
	system("\npause");
	system("cls");
}
