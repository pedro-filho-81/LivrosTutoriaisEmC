/**
 * Fig. 7.26: fig07_26.c
 * Programa de classificação de múltiplas finalidades 
 * usando ponteiros para função
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 237). Edição do Kindle. 
 */
#include <stdio.h>

#define SIZE 10

// PROTÓTIPOs
void bobble(int work[], const int size, int (*compare)(int a int b));
int ascending(int a, int b);
int descending(int a, int b); 

int main()
{
   // variaveis
   int order; // 1 ordem crescente, 2 ordem decrescente
   // vetor
   int counter; // contador
   
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