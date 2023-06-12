#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de Variáveis
	int n, cont, tabuada;
	
	//Cabeçaho
	printf("ETEC SEBRA\n");
	printf("TPA - Técnicas de Programação em Algoritimos \n");
	printf("Aluno(a): Dimitri Lucas dos Santos Moreira \n\n");
	
	n = 10090; // Atribuinda a variácel n o valor 6
	
	// Escrevendo mensagem na tela
	printf("\n\nA tabuada do numero %d %c:\n\n\n", 10090, n);
	
	// Loop para o cálculo da tabuada.
	for(cont = 0;(cont <= 10); cont++) {
		tabuada = cont * n;
		//Immpressão dos resultados.
		printf("\t%d * %d = %d\n", n, cont, tabuada);
	}
	// Pulando linha
	printf("\n");
	
	//Para o sistema visualizar o resultado
	system("PAUSE");
	return 0;
}

