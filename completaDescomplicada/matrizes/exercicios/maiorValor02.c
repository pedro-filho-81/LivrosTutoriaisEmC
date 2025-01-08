/**
 * 2) Faça um programa que leia uma matriz de tamanho 
 * 4 × 4. Imprima na tela o maior valor contido nessa 
 * matriz e a sua localização (linha e coluna).
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 129). 
 * GEN LTC. Edição do Kindle. 
 * Pedro, 07/10/2024
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
   int linha = 0, coluna = 0;
   int menorRow = 0, menorCol = 0;

   srand(time(NULL)); // semente para rand()

   // adiciona valor a matriz
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // matriz recebe valor
         matrizA[i][j] = 1 + rand() % 50;

      } // end for j
   } // end for i

   // verifica se i e j são iguais a zero
   if (i == 0 && j == 0) // se verdade
   {
      // maior e menor recebe o valor da matriz
      maior = matrizA[i][j];
      menor = matrizA[i][j];
   } // end if
   
   // loop para o maior valor
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         // verifica se o valor da matriz é maior que 
         // a variável maior
         if (matrizA[i][j] > maior) // se verdade
         {
            // maior recebe o valor da matriz
            maior = matrizA[i][j];
            linha = i;
            coluna = j; 
         } // end if
         
         // menor valor
         // se o valor da matriz vor menor que o valor menor
         if (matrizA[i][j] < menor) // se verdade
         {
            // menor recebe o valor da matriz
            menor = matrizA[i][j];
            menorRow = i;
            menorCol = j; 
         } // end if
                  
      } // end for col      
   } // end for row
   
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

   // exibe resultado
   printf("\nO maior valor eh %d na linha %d coluna %d", maior, linha, coluna);
   
   printf("\nO menor valor eh %d na linha %d coluna %d\n", menor, menorRow, menorCol);
   
   return 0;

} // end main