#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float n;
	printf("Descubra o valor da compra de maçãs: ");
	printf("\n");
	scanf("%f", &n);
	printf("\n");
	
	if(n <=12){
		n = n * 1.30;
		printf("O valor das suas maçãs fora dúzia R$ %.2f\n", n);
	}
	else{
		printf("O valor das suas maçãs por dúzia é R$ %2.f\n\n", n);
	}
	printf("\n");
	system("pause");
	system("cls");
}
