#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	printf("Descubra se o valor � negativo ou positivo: ");
	printf("\n");
	scanf("%d", &n);
	printf("\n");
	
	if(n >0){
		printf("O n�mero � positivo\n\n");
	}
	else{
		printf("O n�mero � negativo\n\n");
	}
	printf("%d\n\n\n", n);
	system("pause");
	system("cls");
}
