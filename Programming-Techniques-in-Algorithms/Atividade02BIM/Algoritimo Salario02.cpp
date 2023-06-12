#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float sb, d, dct, sl;
	printf("Digite quantos dias o encanador trabalhou: ");
	scanf("%f", &d);
	sb = 30 * d;
	dct = sb * 0.08;
	sl = sb - dct;
	printf("O salario por dias trabalhados sao: %2.f", sl);
	printf("\n");
	system("pause");
}
