/**
 * Cria vetores e inicializa adicionando números
 * aleatórios
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

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
      // gera números aleatórios
      // vetor recebe os números gerados
      // pela função rand()
      vetor[i] = rand();
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