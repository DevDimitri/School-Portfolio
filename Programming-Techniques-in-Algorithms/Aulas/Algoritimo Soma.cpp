#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, soma;
	soma = 0;
	printf("Digite o primeiro valor: ");
	// concatenação: juntar coisas diferentes
	// uma string e uma variável
	//operador de 
	scanf("%d", &y);
	printf("O valor digitado foi: %d", y);
	//concentrção na linguagem C é a vírgula ',' (sem os apostrofos)
	printf("\nDigite o segunndo valor:");
	scanf("%d", &x);
	printf("O valor digitado foi: %d", x);
	soma = x + y;
	printf("\nA soma de %d", soma);
}
