/*
	Neste problema devemos fazer algo com o n�mero somente se
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	/*
		se(condi��o){
			set de instru��es;
		}
		
		se(n < 0){
			n = n * -1;
		}
		exibir n;
	*/
	
	if(n <0){
		n=n * -1;
	}
	printf("%d\n\n\n", n);
	system("pause");
	system("cls");//limpa tela
}
