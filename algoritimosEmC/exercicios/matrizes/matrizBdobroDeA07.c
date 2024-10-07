/**
 * h)Elaborar um programa que leia uma matriz A do 
 * tipo inteira de duas dimensões com cinco linhas e 
 * cinco colunas. Construir uma matriz B de mesma 
 * dimensão, em que cada elemento seja o dobro de cada 
 * elemento correspondente da matriz A, com exceção 
 * dos valores situados na diagonal principal 
 * (posições B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]), 
 * os quais devem ser o triplo de cada elemento 
 * correspondente da matriz A. Apresentar ao final a 
 * matriz B.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 403). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COLUmN 5

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];
   int matrizB[ROW][COLUmN];

   int i, j;

   srand(time(NULL));

   // adiciona valor a matriz C
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         matrizA[i][j] = 1 + rand() % 50;

         if (i != j)
         {
            matrizB[i][j] = matrizA[i][j] * 2;
         } else {
            matrizB[i][j] = matrizA[i][j];
         }  
      } // end for j
   } // end for i

   // EXIBE A mATRIZ A
   printf("\nmatrizA:\n");
   printf("                \n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matrizA[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   // EXIBE A mATRIZ B
   printf("\nmatrizB:\n");
   printf("                \n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matrizB[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   return 0;

} // end main