/**
 * Cria vetores e inicializa adicionando números
 * aleatórios dentro de um intervalo específico
 * como por exemplo entre 0 e 99?
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10 // tamanho do vetor

int main()
{
   // vetor
   int vetor[SIZE];

   // VARIÁVEIS
   int i, count = SIZE;

   // cria a semente para a função rand()
   // s da palavra "seed = semente"
   srand(time(NULL));

   // loop para adicionar valores ao vetor
   for ( i = 0; i < count; i++)
   {
      // gera números aleatórios entre 0 e 99
      // vetor recebe os números gerados
      // pela função rand() % 100 => 0 até 99
      /* vetor[i] = rand() % 100; */

      // vetor recebe valores aleatórios
      // entre 1 e 100 inclusive
      vetor[i] = 1 + rand() % 100;
   } // end for adicionar

   // exibe os valores adicionados
   printf("\nVetor = {");
   // loop para exibir o vetor[]
   for ( i = 0; i < count; i++)
   {
      // exibir
      printf("%d ", vetor[i]);
   } // end for
   printf(" };");
   
   printf("\n\n");
   return 0;
} // end main