/**
 * Ler um vetor N de tamanho 20 e exibe na tela
 * em seguida troque o 1º valor pelo último
 * o 2º pelo penúltim até todos serem trocados.
 * gerar números aleatórios em um vetor com as 
 * funções srand() e rand()
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 20

// função para adicionar valores aleatórios
void add(int vetor[])
{
   // loop para adicionar valores
   for (int i = 0; i < SIDE; i++)
   {
      // vetor recebe valores aleatórios
      vetor[i] = 1 + rand() % 100;
   } // end for
} // end add

// função para trocar valores do vetor
void trocarValores(int vetorA[], int vetorB[])
{
   // variáveis
   int temp = 0, fim = SIDE - 1;

   // loop para trocar os valores 
   for (int i = 0; i < SIDE; i++)
   {
      temp = vetorA[i]; // variável temp recebe valor do vetorA
      vetorA[i] = vetorB[fim]; // vetorA recebe o último valor do vetorB
      vetorB[fim] = temp; // vetorB recebe o valor da variável temp
      fim--; // contador fim é decrementado em 1
   } // end for   
} // end trocarValores

// função display ( exibir )
void display(int vetor[])
{
   // loop para linha da matriz
   for (int i = 0; i < SIDE; i++)
   {  
      // exibe os elementos da matriz
      printf("%4d", vetor[i]);
   } // end for colunas
} // end display

int main()
{  
   // matrizes
   int vetorA[SIDE];
   int vetorB[SIDE];
   
   // gera sementa para rand
   srand(time(NULL));

   // chama a função add ( adicionar )
   add(vetorA);

   printf("\nINVERTE VALORES");

   // chama função
   printf("\nVetorA:\n");
   display(vetorA);

   trocarValores(vetorA,vetorB);
   printf("\nVetor trocado:\n");
   display(vetorB);

   printf("\n\n");
   return 0;
} // end main