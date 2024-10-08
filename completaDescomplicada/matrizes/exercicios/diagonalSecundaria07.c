/**
 * 
 * Pedro, 08/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COLUmN 5

int main()
{
   // matrizes
   int matrizA[ROW][COLUmN];

   int i = 0, j = 0, maior = 0, menor = 51;
   int maiorRow = 0, maiorCol = 0;
   int menorRow = 0, menorCol = 0;
   int somaPrici = 0, somaSecun = 0;

   srand(time(NULL));

   // adiciona valores a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valores
         matrizA[i][j] = -30 + rand() % 100;
         
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

            // soma principal
            somaPrici += matrizA[i][j];
         } // end if         
      } // end for j      
   } // end for i  

/*
    0 1 2
  0 1 2 3 => 0,2
  1 4 5 6 => 1,1
  2 7 8 9 => 2,0
*/
   // exibe o cabeçalho da diagonal secundária
   printf("\nDiagonal secundaria: ");
   // exibe a diagonal secundária

   for ( j = 0; j < COLUmN; j++)
   {
      // exibe os valores
      // i = 0 j  = 2
      // i = 1 j = 1
      // i = 2 j = 0
      printf("%5d", matrizA[j][COLUmN - 1 - j]);
            
      // soma secundária
      somaSecun += matrizA[j][COLUmN - 1 - j];

   } // end for j      

   // exibe resultado
   printf("\nO maior valor eh %d na linha %d coluna %d", maior, maiorRow, maiorCol);
   
   printf("\nO menor valor eh %d na linha %d coluna %d\n", menor, menorRow, menorCol);

   printf("O total da diagonal principal eh: %3d\n", somaPrici);

   printf("O total da diagonal secundaria eh: %3d\n\n", somaSecun);
   
   return 0;

} // end main