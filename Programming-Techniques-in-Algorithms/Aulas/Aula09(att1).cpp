#include <stdio.h>
main(){
       int matriz[3][3]; // declaração da matriz
       int maior = 0, indice1, indice2; // variáveis que guardarão o maior numero e os indices dele
       for (int i = 0; i < 3; i++) // laço para percorrer a linha da matriz
       {
           for (int j = 0; j < 3; j++) // laço para percorrer a coluna da matriz
           {
               printf("\nDigite a posicao [%d][%d] da matriz: ", i+1, j+1);
               scanf("%d", &matriz[i][j]); // le o numero digitado e armazena na posição I, J
           }
       }
       
       for (int i = 0; i < 3; i++) // laço para percorrer a linha da matriz
       {
           for (int j = 0; j  maior) // verifica se o numero do indice atual é maior que o anterior,
                                         //  caso sim, será gravado o numero e o indice nas 
                                         //  variáveis auxiliares
               {
                  maior = matriz[i][j];
                  indice1 = i;
                  indice2 = j;
               }
           }
       }
       
       printf("O maior numero digitado foi: %d, estando no indice [%d][%d]\n\n",
               maior, indice1+1, indice2+1); // mostra na tela o maior numero e os indices do mesmo
       system("pause");
}
