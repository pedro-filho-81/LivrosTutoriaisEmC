/**
 * b)Elaborar um programa que leia duas matrizes A e 
 * B, cada uma com uma dimensão para sete elementos 
 * inteiros. Construir uma matriz C de duas dimensões, 
 * cuja primeira coluna deve ser formada pelos 
 * elementos da matriz A e a segunda coluna pelos 
 * elementos da matriz B. Apresentar a matriz C.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 402). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 7
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
            matC[i][j] = vetorA[i];
         } else {
            matC[i][j] = vetorB[i];
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
   printf("               A    B\n");
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