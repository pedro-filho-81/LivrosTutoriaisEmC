/**
 * e)Elaborar um programa que leia duas matrizes A e 
 * B, cada uma com uma dimensão para 12 elementos 
 * reais. Construir uma matriz C de duas dimensões, 
 * sendo a primeira coluna da matriz C formada pelos 
 * elementos da matriz A multiplicados por 2 e a 
 * segunda coluna formada pelos elementos da matriz B 
 * subtraídos de 5. Apresentar separadamente as 
 * matrizes.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) 
 * (pp. 402-403). Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 12
#define COLUmN 2

int main()
{
   // matrizes
   int vetorA[ROW];
   int vetorB[ROW];
   int matC[ROW][COLUmN];

   int i, j;

   srand(time(NULL));

   // adiciona valores aos vetores
   for ( i = 0; i < ROW; i++)
   {
      vetorA[i] = 1 + rand() % 50;
      vetorB[i] = 1 + rand() % 50;
   } // end for vtr

   // adiciona valor a matriz C
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         if (j == 0)
         {
            matC[i][j] = vetorA[i] * 2;
         } else {
            matC[i][j] = vetorB[i] - 5;
         } // end else   
      } // end for j
   } // end for i

   // EXIBE OS VETORES
   printf("\nvetorA:\n");
   for ( i = 0; i < ROW; i++)
   {
      printf("%3d", vetorA[i]);
   }
      
   // EXIBE OS VETORES
   printf("\nvetorB:\n");
   for ( i = 0; i < ROW; i++)
   {
      printf("%3d", vetorB[i]);
   }
    
   // EXIBE A mATRIZ C
   printf("\nmatrizC:\n");
   printf("                A    B\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matC[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   return 0;

} // end main