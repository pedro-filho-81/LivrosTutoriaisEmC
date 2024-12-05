/**
 * O que é e como criar um ponteiro?
 * Ponteiro - é uma variável que guarda um endereço de memória.
 * Possui como conteúdo o endereço de memória de outra variável
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variável
   int num = 10;
   int *ptr; // ponteiro para inteiro

   printf("\nCria Variavel:\nint num = 10;");
   printf("\nCria um Ponteiro para inteiro:\nint *ptr;");

   ptr = 10; // atribuição indevida
   ptr = &num; // ponteiro recebe o endereço da variável

   printf("\nptr = 10; eh uma atribuicao invalida!; ");
   printf("\nptr = &num; ponteiro recebe o endereco de num.");
   printf("\n*ptr mostra o conteudo de ptr: %d\n", *ptr);

   printf("\n\n");
   return 0;

} // end main