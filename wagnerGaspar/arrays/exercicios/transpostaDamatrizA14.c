/**
 * Faça um programa que calcular a transposta de
 * uma matriz 5 x 4. Imprima as duas matrizes na tela.
 * Transposta é o inverso da matriz, 
 * exemplo: matriz 5x4 transposta é 4x5. * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 5
#define COLUNA 4

// add matrizes
void addA(int matriz[][COLUNA])
{
   // variáveis
   int l, c;

   for( l = 0; l < LINHA; l++)
      for(c = 0; c < COLUNA; c++)
         matriz[l][c] = 1 + rand() % 100;
} // end matrizes

// addTransposta
void addTranposta(int matriz[][COLUNA], int transposta[][LINHA])
{
   int i, j;

   // loop para calcular uma transposta
   for(i = 0; i < LINHA; i++)
   {
      for(j = 0; j < COLUNA; j++)
      {
        transposta[j][i] = matriz[i][j];
      } // end for coluna
   } // end linha
} // end transposta

// function exibir
void exibe(int matriz[][COLUNA])
{
   int i, j;

   for ( i = 0; i < LINHA; i++)
   {
      for ( j = 0; j < COLUNA; j++)
      {
         printf("%5d", matriz[i][j]);
      } // end for j
      printf("\n");
   } // end for i 
} // end print

// function exibir
void exibeTransp(int transposta[][LINHA])
{
   int i, j;

   for ( i = 0; i < COLUNA; i++)
   {
      for ( j = 0; j < LINHA; j++)
      {
         printf("%5d", transposta[i][j]);
      } // end for j
      printf("\n");
   } // end for i 
} // end print

// addValor
int main()
{
   // matrizes
   int matriz[LINHA][COLUNA];
   int transposta[COLUNA][LINHA];
   int diagPrincipal

   srand(time(NULL));

   addA(matriz);
   printf("\nmatriz 5 x 4:\n");
   exibe(matriz);

   addTranposta(matriz, transposta);
   printf("\nTransposta 4 x 5:\n");
   exibeTransp(transposta);

   printf("\n\n");
   return 0;
} // end main