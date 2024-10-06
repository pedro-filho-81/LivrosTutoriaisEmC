/**
 * c)Elaborar um programa que leia 20 elementos para 
 * uma matriz qualquer, considerando que essa matriz 
 * tenha o tamanho de quatro linhas por cinco colunas. 
 * Em, seguida, apresentar a matriz.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 402). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COLUmN 5

int main()
{
   // matrizes
   int matC[ROW][COLUmN];

   int i, j;

   srand(time(NULL));

   // adiciona valor a matriz C
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         matC[i][j] = 1 + rand() % 50;
      } // end for j
   } // end for i
      
   // EXIBE A mATRIZ C
   printf("\nmatrizC:\n");
   printf("           ");
   for ( i = 0; i < COLUmN; i++)
   {
      printf("%5d", i + 1);
   }
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matC[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   return 0;

} // end main