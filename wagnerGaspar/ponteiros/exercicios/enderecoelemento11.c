/**
 * Esercício 03
 * Crie um programa que contenha um array de inteiros 
 * com 10 elementos.
 * Imprima o elemento e o endereço de cada posição do
 * array.
 * Aula - 194
 */
#include <stdio.h>
#define SIZE 10

// imprimir
void imprimir(int *vetor)
{
   // variável
   int i;
   printf("\n**********************\n");
   // loop for para exibir os valores do vetor
   for ( i = 0; i < SIZE; i++)
   {
      // exibe os valores do vetor *(vetor + i)
      // exibe os endereços dos elementos (vetor + i)
      // usando aritimética de ponteiros
      printf("%4d\t%p\n", *(vetor + i), (vetor + i));
   } // end for
   printf("**********************");
} // end imprimir

int main()
{
   // cria vetor
   int vetor[SIZE] = {0,1,2,3,4,5,6,7,8,9};

   // cabeçalho
   printf("\n%s\t%s", "Valor", "Endereco");
   
   // chama função
   imprimir(vetor);

   printf("\n\n");
   return 0;
} // end main