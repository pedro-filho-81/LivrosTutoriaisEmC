/**
 * n)Elaborar um programa que leia uma matriz A de 
 * duas dimensões com sete linhas e sete colunas. Ao 
 * final, apresentar o total de elementos pares 
 * existentes na matriz.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 404). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 07/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 6
#define COLUmN 7

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];

   int i = 0, j = 0, count = 0;

   srand(time(NULL));

   // adiciona valor a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valor
         matrizA[i][j] = 1 + rand() % 50;

         // se o valor for par
         if (matrizA[i][j] % 2 == 0)
         {
            count++; // conte
         } // end if
      } // end for j
   } // end for i

   // EXIBE A mATRIZ
   printf("\nmatrizA:\n");
   printf("Colunas:    ");
   for ( i = 0; i < COLUmN; i++)
      printf("%3d", i);
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
      // exibe a linha
   {  printf("linha => %2d:", i);
      // for coluna
      for ( j = 0; j < COLUmN; j++)
      {
         // exibe a matriz
         printf("%3d", matrizA[i][j]);
      } // end for j
      printf("\n"); // pula linha
   } // end for i

   printf("\nDiagonal principal: ");
   // exibe a diagonal principal
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         if (i == j)
         {
            printf("%3d", matrizA[i][j]);
         } // end if         
      } // end for j      
   } // end for i   
   printf("\nA matriz tem %2d elementos pares.\n", count);
   
   return 0;

} // end main