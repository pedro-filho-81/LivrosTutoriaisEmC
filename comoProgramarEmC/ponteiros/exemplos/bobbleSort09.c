/**
 * Fig. 7.15: fig07_15.c
 * Esse programa coloca valores em um array, ordena os 
 * valores em  3 ordem crescente e imprime o array 
 * resultante.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 221). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// PROTÓTIPO
void bobbleSort(int *const vetor[], const int size);

int main()
{
   // vetor
   int vetor[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   // variável
   int i = 0; // contador

   printf("Itens de dados na ordem original:\n");

   // loop for para exibir vetor
   for ( i = 0; i < SIZE; i++)
   {
      printf("%4d", vetor[i]);
   } // end for

   // chama a função para ordenar o vetor
   bobbleSort( vetor, SIZE);

   printf("\nItens de dado em ordem crescente:\n");

   // loop for para exibir o vetor ordenado
   for ( i = 0; i < SIZE; i++)
   {
      printf("%4d", vetor[i]);
   } // end for
   
   printf("\n");

   return 0;

}// end main

// function
void bobbleSort(int *const vetor[], const int size)
{
   void swap(int *element1Ptr, int *element2Ptr);

   // variável
   int pass; // passadas
   int j; // 

   for ( pass = 0; pass < size - 1; pass++)
   {
      for ( j = 0; j < size; j++)
      {
         if (vetor[j] > vetor[j + 1])
         {
            swap(&vetor[j], &vetor[j + 1]);
         } // end if
      } // end for j
   } // end for pass   
} // end function

// function swap
void swap(int *element1Ptr, int *element2Ptr)
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end swap