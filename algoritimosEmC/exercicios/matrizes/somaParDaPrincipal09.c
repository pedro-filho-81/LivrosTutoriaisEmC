/**
 * l)Elaborar um programa que leia uma matriz A de 
 * duas dimensões com 15 linhas e 15 colunas. 
 * Apresentar o somatório dos elementos pares situados 
 * na diagonal principal da referida matriz.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 404). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 07/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 15
#define COLUmN 15

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];
   int diagPrincipal[ROW][COLUmN];

   int i = 0, j = 0, soma = 0;

   srand(time(NULL));

   // adiciona valor a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valor
         matrizA[i][j] = 1 + rand() % 50;

         // se linha igual a coluna e valor par
         if (i == j && matrizA[i][j] % 2 == 0)
         {
            // some esses valores
            soma += matrizA[i][j];
         } // end else

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
   {  printf("linha => %2ld:", i);
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
         if (i == j && matrizA[i][j] % 2 == 0)
         {
            printf("%3d", matrizA[i][j]);
         } // end if         
      } // end for j      
   } // end for i   
   
   printf("\nA soma da diagonal principal eh: %d\n\n", soma); // idem
   
   return 0;

} // end main