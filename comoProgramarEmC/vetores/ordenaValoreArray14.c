#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 10

/**
 * Este programa ordena um array em ordem crescente ou decrescente
 * Algoritimo => Bobble Sort
 */
int main() {

   // vetor
   int vetor[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   // variáveis
   int passada;
   int i; // contador for
   int temp; // teporário para trocar elementos do array(vetor)

   system("cls");

   // cabeçalho
   printf("\nPrograma para ordenar valores do vetor.\n");
   printf("Vetor original:");

   // loop for para imprimir os valores do vetor
   printf("{ ");
   for(i = 0; i < SIZE; i++) {
      printf("%5d ", vetor[i]);
   } // end for
   printf(" };\n\n");

   /**
    * Bobble Sort
    * Ordena o vetor em ordem crescente ou decrescente
    * loop for para controlar as passadas
    */
   for (passada = 1; passada < SIZE; passada++)
   {
      // loop for para controlar número de 
      // comparações por passadas
      for (size_t i = 0; i < SIZE; i++)
      {
         /** 
          * compara elementos adjacentes e os troca
          * se o primero elemento for maior que 
          * o segundo elemento
          */
         // se o elemento anterior for  maior
         // que o elemento posterior
         if (vetor[i] > vetor[i + 1]) // se verdade
         {
            // troca os elementos
            temp = vetor[i]; // temporário recebe o valor do elemento anteriro
            vetor[i] = vetor[i + 1]; // local anterior recebe valor posterior
            vetor[i + 1] = temp; // local posterior recebe valor temporário (valor anterior)
         } // end if         
      } // end for i
   } // end for passada

   // cabeçalho
   printf("Vetor em ordem crescente:");

   // loop for para imprimir os elementos do vetor
   printf("{ ");
   for(i = 0; i < SIZE; i++) {
      printf("%5d ", vetor[i]);
   } // end for
   printf("};\n\n");
   
   return 0; // end programa

} // end main