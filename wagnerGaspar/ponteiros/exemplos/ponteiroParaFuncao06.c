/**
 * Fig. 7.26: fig07_26.c
 * Programa de classificação de múltiplas finalidades 
 * usando ponteiros para função
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 237). Edição do Kindle. 
 */
#include <stdio.h>

#define SIZE 10

// protótipos
void bubble( int work[], const int size, int (*compare) (int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main()
{
   int order; // 1 para ordem crescente, 2 para ordem decrescente
   int counter; // contador

   // inicializa array
   int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   // entrada de dados
   printf("\nEntrada de dados:\n");
   printf("Digite 1 para classeficar em ordem crescente,\n"
   "Digite 2 para classificar em ordem decrescente: ");
   scanf("%d", &order);

   printf("\nItens de dados na ordem original:\n");

   // mostra array original
   for(counter = 0; counter < SIZE; counter++)
      printf("%5d", a[counter]);

   /*
      classifica array em ordem crescente; passa função crescente como
      um argumento para especificar classificação crescente
   */
   if (order == 1)
   {
      bubble(a, SIZE, ascending);
      printf("\nItens de dados em ordem crescente\n");
   } // end if
   else
   {
      // passa a função crescente
      bubble(a, SIZE, descending);
      printf("\nItens de dados em ordem decrescente\n");
   } // end else
   
   // mostra array ordenado
   for(counter = 0; counter < SIZE; counter++) 
   {
      printf("%5d", a[counter]);
   } // end for

   printf("\n\n");
   return 0;

} // end main

/**
 * bubble sort de multipla finalidade; parâmetro compare é um ponteiro
 * para a função de comparação que determina classificação
 */
void bubble( int work[], const int size, int (*compare)(int a, int b))
{
   int passada;
   int contador;

   void inverte(int *element1Ptr, int *element2Ptr); // protótipo

   // loop para controlar a passada
   for(passada = 1; passada < SIZE; passada++)
   {
      for ( contador = 0; contador < SIZE - 1; contador++)
      {
         // se elementos adjacente estão fora de ordem, inverta-os
         if ( (*compare)(work[contador], work[contador + 1]))
         {
            inverte(&work[contador], &work[contador + 1]);
         } // end if         
      } // end for contador      
   } // end for passada
} // end bubble sort

/**
 * Troca valores nos locais da memória aos quais os elemente1Ptr e
 * elemente2Ptr apontam
 */
void inverte(int *elemente1Ptr, int *elemente2Ptr)
{
   // veriável
   int manutencao;

   manutencao = *elemente1Ptr;
   *elemente1Ptr = *elemente2Ptr;
   *elemente2Ptr = manutencao;
} // end inverte

/**
 * Determina se os elementos estão  fora de ordem para uma ordem
 * de classificação crescente
 */
int ascending(int a, int b)
{
   return b < a; // troca se b for menor que a
} // end crescente

/**
 * Determina  se os elementos estão fora de ordem para uma ordem
 * de classificação decrescente
 */
int descending(int a, int b)
{
   return b > a; // troca se b maior que a
} // end decrescente