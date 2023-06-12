#include <stdio.h>
#include <stdlib.h>

int main(){
	float d, t, lu, vm;
	lu = 0;
	printf("Digite as informacoes sobre sua viagem");
	printf("\n");
	printf("\nDigite o Tempo gasto da viagem: ");
	scanf("%f", &t);
	printf("Digite a Velocidade Media: ");
	scanf("%f", &vm);
	printf("\n");
	d = t * vm;
	printf("Resultado das informacoes sobre a sua viagem");
	printf("\n");
	printf("\nSua distancia foi: %.2f", d);
	lu = d / 12;
	printf("\nA quantidade de litros gastos foi: %.2f \n", lu);
	printf("\n");
	system("pause");
}
