/**
 * a)Elaborar um programa que leia duas matrizes A e 
 * B, cada uma de duas dimensões com cinco linhas e 
 * três colunas para valores inteiros. Construir uma 
 * matriz C de mesma dimensão, que seja formada pela 
 * soma dos elementos da matriz A com os elementos da 
 * matriz B. Apresentar os elementos da matriz C.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 402). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COLUmN 3

int main()
{
   // matrizes
   int matA[ROW][COLUmN];
   int matB[ROW][COLUmN];
   int matC[ROW][COLUmN];

   int i, j;

   srand(time(NULL));

   // adiciona valores 
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         matA[i][j] = 1 + rand() % 50;
         matB[i][j] = 1 + rand() % 50;
         matC[i][j] = matA[i][j] + matB[i][j];
      } // end for col      
   } // end for row
   
   printf("\nmatrizA:\n");
   // exebe matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matA[i][j]);
      } // end for col
      printf("\n");
   } // end for row   

   printf("\nmatrizB:\n");
   // exebe matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matB[i][j]);
      } // end for col
      printf("\n");
   } // end for row
   
   printf("\nmatrizC:\n");
   // exebe matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matC[i][j]);
      } // end for col
      printf("\n");
   } // end for row

   return 0;

} // end main