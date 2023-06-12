#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	printf("Descubra se o valor é negativo ou positivo: ");
	printf("\n");
	scanf("%d", &n);
	printf("\n");
	
	if(n >0){
		printf("O número é positivo\n\n");
	}
	else{
		printf("O número é negativo\n\n");
	}
	printf("%d\n\n\n", n);
	system("pause");
	system("cls");
}
