#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float p, d, a, gc, cfa;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Veja Quanto gastou com Cigarros");
	printf("\n");
	printf("Qual � o pre�o do Cigarro? Digite: ");
	scanf("%f", &p);
	printf("\n");
	printf("Qual quantidade de Ma�os consumidos por Dia?: ");
	scanf("%f", &d);
	printf("\n");
	printf("A quantos Anos esta pessoa fuma?: ");
	scanf("%f", &a);
	cfa = 365 * a;
	gc = cfa * p * d;
	printf("\nO valor gasto com Cigarros em anos � R$%f", gc);
	printf("\n");
	system("pause");
}
