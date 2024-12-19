/**
 * Alocação dinamica de memória com a função mALLOCK.
 * Retorna um ponteiro para a região de memoria alocada
 * ou NULL.
 * Aula - 197
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // ponteiro
   int *x;
   printf("\nCria o ponteiro:\n\tint *x;");

   // alocando memória para inteiro com mallock
   // e seu endereço é retornado e salvo no
   // ponteiro x
   x = malloc(sizeof(int));
   printf("\nAlocando memoria e\natribuindo ao ponteiro *x:\n\tx = mallock(sizeof(int));");

   printf("\nSe a memoria foi alocada corretamente:\n\tif(x)");
   // verifica se a memória foi alocada com sucesso
   if (x)
   {
      printf("\nImprime:\nMemoria alocada com sucesso.");
      printf("\nO valor de x eh:\n\tx = %d", *x);
      *x = 50;
      printf("\nAtribuindo valor a *x:\n\t*x = 50;");
      printf("\nO valor de eh:\n\tx = %d\n", *x);
   } // end if
   else {
      printf("\nMemoria nao alocada com sucesso.");
   } // end else

   printf("\n\n");
   return 0;
} // end main