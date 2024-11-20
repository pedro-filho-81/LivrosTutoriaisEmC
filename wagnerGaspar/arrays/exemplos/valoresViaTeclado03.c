/**
 * Como adicionar elementos ao vetor via teclado
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
   // vetor
   int vetor[SIZE];

   // VARIável
   int i, count = SIZE;

   // loop para adicionar valores do teclado
   // ao vetor
   for ( i = 0; i < count; i++)
   {
      // entrada de dadps
      printf("Digite um valor para posicao %d: ", i);
      scanf("%d", &vetor[i]);
   } // end for
   
   // exibe os valores adicionados
   printf("Vetor = {");
   // loop para exibir o vetor[]
   for ( i = 0; i < count; i++)
   {
      printf("%3d", vetor[i]);
   } // end for
   printf(" };");
   
   printf("\n\n");
   return 0;
} // end main