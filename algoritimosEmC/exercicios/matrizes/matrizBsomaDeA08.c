/**
 * i)Elaborar um programa que leia uma matriz A do 
 * tipo inteira de duas dimensões com sete linhas e 
 * sete colunas. Construir a matriz B de mesma 
 * dimensão, em que cada elemento seja o somatório de 
 * 1 até o valor armazenado na posição da matriz A, 
 * com exceção dos valores situados nos índices 
 * ímpares da diagonal principal (B[1,1], B[3,3], B[5,
 * 5] e B[7,7]), os quais devem ser o fatorial de cada 
 * elemento correspondente da matriz A. Apresentar ao 
 * final a matriz B.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) 
 * (pp. 403-404). Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 7
#define COLUmN 7

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];
   int matrizB[ROW][COLUmN];

   long int i = 0, j = 0, k = 0, 
            f = 0, fat = 1, soma = 0;

   srand(time(NULL));

   // adiciona valor a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valor
         matrizA[i][j] = 1 + rand() % 10;

         // loop para somar valores
         for ( k = 1; k <= matrizA[i][j]; k++)
         {
            soma += k;

            // verificar se i igual a j
            if (i == j && i % 2 != 0 && j % 2 != 0)
            {
               for ( f = 1; f <= matrizA[i][j]; f++)
               {
                  fat += f;
               } // end for f
               matrizB[i][j] = fat; 
               fat = 1;              
            } // end if     
         } // end for k

         // matriz recebe soma
         matrizB[i][j] = soma;
         // reinicializa soma
         soma = 0;

      } // end for j
   } // end for i

   // EXIBE A mATRIZ
   printf("\nmatrizA:\n");
   printf("                \n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
      // exibe a linha
   {  printf("linha => %2ld:", i + 1);
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
   printf("                \n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2ld:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%7d", matrizB[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   return 0;

} // end main