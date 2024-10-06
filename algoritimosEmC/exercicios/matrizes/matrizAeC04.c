/**
 * d)Elaborar um programa que leia uma matriz A de uma 
 * dimensão com dez elementos inteiros. Construir uma 
 * matriz C de duas dimensões com três colunas, sendo 
 * a primeira coluna da matriz C formada pelos 
 * elementos da matriz A somados com 5, a segunda 
 * coluna formada pelo valor do cálculo da fatorial de 
 * cada elemento correspondente da matriz A e a 
 * terceira e última coluna pelos quadrados dos 
 * elementos correspondentes da matriz A. Apresentar a 
 * matriz C.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 402). 
 * Editora Saraiva. Edição do Kindle.  
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COLUmN 3

int main()
{
   // matrizes
   int matC[ROW][COLUmN];
   int vetorA[ROW];
   int i, j, f, fat = 1;

   srand(time(NULL));

   // adiciona valor a matriz C
   for ( i = 0; i < ROW; i++)
   {
      // adiciona valor ao vetor
      vetorA[i] = 1 + rand() % 10;

      for ( j = 0; j < COLUmN; j++)
      { 
         if (j == 0)
         {
            matC[i][j] = vetorA[i] + 5;
         }
         else {
            if (j == 1)
            {
               for ( f = 1; f <= vetorA[i]; f++)
               {
                  fat *= f;
               }
               matC[i][j] = fat;
               fat = 1;
            }
            else {
               matC[i][j] = vetorA[i] * vetorA[i];
            } // end else      
         } // end for
      } // end for j
   } // end for i

   // EXIBE VETOR
   printf("\nVetorA:\n");
   for ( i = 0; i < ROW; i++)
   {
      printf("%5d", vetorA[i]);
   }
     
   // EXIBE A mATRIZ C
   printf("\nmatrizC:\n");
   printf("            ");
   for ( i = 0; i < COLUmN; i++)
   {
      printf("%9d", i + 1);
   }
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%9d", matC[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   return 0;

} // end main