#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float alt, genero, pi, pi2;
	
	printf("ETEC SEBRA\n");
	printf("TPA - Técnicas de Programação em Algoritimos \n");
	printf("Aluno(a): Dimitri Lucas dos Santos Moreira \n\n");
	printf("VEJA O SEU PESO IDEAL");
    printf("\nDigite 1 para Gênero MASCULINO ou 2 para FEMININO: ");
    scanf("%f", &genero);
    printf("Agora sua ALTURA: ");
    scanf("%f", &alt);
    if(genero < 2){
      	pi = 72.7 * alt - 58;
      	printf("\nO SEU PESO IDEAL É DE: %.2f", pi);
    }
    else{
        pi2 = 62.1 * alt - 44.7;
        printf("\nO SEU PESO IDEAL É DE: %.2f", pi2);
    }
	printf("\n\n\n");
	system("\npause");
	system("cls");
}
