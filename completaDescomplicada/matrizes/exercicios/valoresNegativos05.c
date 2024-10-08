/**
 * 5) Leia uma matriz de tamanho 4 × 4. Em seguida, 
 * conte e escreva na tela quantos valores negativos 
 * ela possui.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 129). 
 * GEN LTC. Edição do Kindle. 
 * Pedro, 08/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COLUmN 4

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];

   int i = 0, j = 0, maior = 0, menor = 51;
   int maiorRow = 0, maiorCol = 0;
   int menorRow = 0, menorCol = 0;
   int vlsNegativos = 0;

   srand(time(NULL));

   // adiciona valores a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valores
         matrizA[i][j] = -20 + rand() % 50;

         // se valor maiores que 10
         if (matrizA[i][j] < 0)         {
            ++vlsNegativos; // contar
         } // 
         
      } // end for j
   } // end for i
   
   // loop para ver o maior e o menor valor
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // verifica o maior
         if (matrizA[i][j] > maior)
         {
            maior = matrizA[i][j];
            maiorRow = i;
            maiorCol = j; 
         } // end if
         
         // verifica o menor valor
         if (matrizA[i][j] < menor)
         {
            menor = matrizA[i][j];
            menorRow = i;
            menorCol = j; 
         } // end if
      } // end for col      
   } // end for row
   
   // EXIBE A mATRIZ
   printf("\nmatrizA:\n");
   printf("Colunas:  =>");
   for ( i = 0; i < COLUmN; i++)
      printf("%5d", i);
   printf("\n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
      // exibe a linha
   {  printf("linha => %2d:", i);
      // for coluna
      for ( j = 0; j < COLUmN; j++)
      {
         // exibe a matriz
         printf("%5d", matrizA[i][j]);
      } // end for j
      printf("\n"); // pula linha
   } // end for i

   // exibe o cabeçalho da diagonal principal
   printf("\nDiagonal principal: ");
   // exibe a diagonal principal
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // verifica se linha i coluna são iguais
         if (i == j) // se verdade
         {
            // exibe os valores
            printf("%5d", matrizA[i][j]);
         } // end if         
      } // end for j      
   } // end for i  

   // exibe resultado
   printf("\nO maior valor eh %d na linha %d coluna %d", maior, maiorRow, maiorCol);
   
   printf("\nO menor valor eh %d na linha %d coluna %d\n", menor, menorRow, menorCol);

   printf("A matriz tem %3d valores negativos:\n\n", vlsNegativos);
   
   return 0;

} // end main