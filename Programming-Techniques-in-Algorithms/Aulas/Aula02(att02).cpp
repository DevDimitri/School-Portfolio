#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, maior;
	printf("ETEC SEBRAE");
	printf("\nVEJA QUAL � O MAIOR N�MERO DO TIPO INTEIRO");
    printf("\n\nDigite o primeiro N�mero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo N�mero: ");
    scanf("%d", &n2);
    if(n1 > n2){
        maior = n1;
    }
    else{
        if(n2>n1){
            maior = n2;
        }
    }
    printf("\nO MAIOR N�MERO �: %d", maior);
	printf("\n\n\n");
	system("\npause");
	system("cls");
}
