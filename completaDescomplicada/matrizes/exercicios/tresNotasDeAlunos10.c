/**
 * 10) Leia uma matriz de tamanho 10 × 3 com as notas 
 * de 10 alunos em três provas. Em seguida, calcule e 
 * escreva na tela o número de alunos cuja pior nota 
 * foi na prova 1, o número de alunos cuja pior nota 
 * foi na prova 2 e o número de alunos cuja pior nota 
 * foi na prova 3.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 130). 
 * GEN LTC. Edição do Kindle. 
 * Pedro, 08/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COLUmN 3

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];

   int i = 0, j = 0;
   
   srand(time(NULL));

   // adiciona valores a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         matrizA[i][j] = 1 + rand() % 100;
      } // end for j            
   } // end for i
   
   // EXIBE A mATRIZ
   printf("\nmatrizA:\n");
   printf("Colunas:  =>");
   for ( i = 0; i < COLUmN; i++)
      printf("%5d", i + 1);
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {      
      // exibe a linha
      printf("Aluno => %2d:", i + 1);
      // for coluna
      for ( j = 0; j < COLUmN; j++)
      {
         // exibe a matriz
         printf("%5d", matrizA[i][j]);
      } // end for j
      printf("\n"); // pula linha
   } // end for i

   return 0;

} // end main