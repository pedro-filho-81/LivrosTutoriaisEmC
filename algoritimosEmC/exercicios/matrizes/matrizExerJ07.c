/**
 * j)Elaborar um programa que leia uma matriz A de 
 * duas dimensões com seis linhas e cinco colunas. 
 * Construir a matriz B de mesma dimensão, que deve 
 * ser formada do seguinte modo: para cada elemento 
 * par da matriz A deve ser somado 5 e de cada 
 * elemento ímpar da matriz A deve ser subtraído 4. 
 * Apresentar ao final as matrizes A e B.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 404). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 07/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 6
#define COLUmN 5

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];
   int matrizB[ROW][COLUmN];

   long int i = 0, j = 0;

   srand(time(NULL));

   // adiciona valor a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valor
         matrizA[i][j] = 1 + rand() % 50;

         if (matrizA[i][j] % 2 == 0)
         {
            // matriz B
            matrizB[i][j] = matrizA[i][j] + 5;  
         } else {
            matrizB[i][j] = matrizA[i][j] - 4;
         } // end else

      } // end for j
   } // end for i

   // EXIBE A mATRIZ
   printf("\nmatrizA:\n");
   printf("Colunas:    ");
   for ( i = 0; i < COLUmN; i++)
      printf("%7d", i);
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
      // exibe a linha
   {  printf("linha => %2ld:", i);
      // for coluna
      for ( j = 0; j < COLUmN; j++)
      {
         // exibe a matriz
         printf("%7d", matrizA[i][j]);
      } // end for j
      printf("\n"); // pula linha
   } // end for i
   printf("\n"); // idem
   
   // EXIBE A mATRIZ
   printf("\nmatrizB:\n");
   printf("Colunas:    ");
   for ( i = 0; i < COLUmN; i++)
      printf("%7d", i);
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2ld:", i);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%7d", matrizB[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   return 0;

} // end main