#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, s, sub, p, d, m;
	s, sub, p, d, m = 0;
	printf("ETEC SEBRAE");
	printf("\nVEJA A SOMA, A SUBTRA��O, O PRODUTO, A DIVIS�O E A M�DIA");
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
	printf("\nA Soma dos valores �: %f", s);
	printf("\nA Subtra��o dos valores �: %f", sub);
	printf("\nO Produto dos valores �: %f", p);
	printf("\nA Divis�o dos valores �: %f", d);
	printf("\nA M�dia dos valores �: %f", m);
	printf("\n\n\n");
	system("\npause");
	system("cls");
}
