/**
 * Preencher o vetor B com o valor do quadrado
 * de cada elemento do vetor A gerar números 
 * aleatórios em um vetor as funções srand() e rand()
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 10

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

// função display
void display(int vetor[])
{
   // loop para linha da matriz
   for (int i = 0; i < SIDE; i++)
   {  
      // exibe os elementos da matriz
      printf("%5d", vetor[i]);
   } // end for colunas
} // end display

int main()
{  
   // matrizes
   int vetorA[SIDE];
   int vetorB[SIDE];
   
   // variáveis
   int i;
   
   // gera sementa para rand
   srand(time(NULL));

   // chama a função add
   add(vetorA);

   for ( i = 0; i < SIDE; i++)
   {
      // vetorB recebe o quadrado do vetorA
      vetorB[i] = vetorA[i] * vetorA[i];
   } // end for   

   // chama função
   printf("\nVetorA:\n");
   display(vetorA);

   printf("\nVetorB\n");
   display(vetorB);
   
   printf("\n\n");
   return 0;
} // end main