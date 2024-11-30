/**
 * Faça uM prograMa que iMpriMa na tela a diagonal
 * secundária de uMa Matriz 7 x 7
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

// add matrizes
void add(int matriz[][SIZE])
{
   // variáveis
   int l, c;

   for( l = 0; l < SIZE; l++)
      for(c = 0; c < SIZE; c++)
         matriz[l][c] = 1 + rand() % 100;
} // end matrizes

// add diagonal secundária
void addDiagSecundaria(int matriz[][SIZE], int vetor[])
{
   int l, c;

   // loop para verificar valores da matriz
   for(l = 0; l < SIZE; l++)
      for( c = 0; c < SIZE; c++)
      {
            // vetor recebe o valor da matriz
            vetor[l] = matriz[l][SIZE - 1 - l];
      } // end if
} // end add diagonal secundária

// function exibir
void exibe(int matriz[][SIZE])
{
   int i, j;

   for ( i = 0; i < SIZE; i++)
   {
      for ( j = 0; j < SIZE; j++)
      {
         printf("%5d", matriz[i][j]);
      } // end for j
      printf("\n");
   } // end for i 
} // end print

// exibe diagonal secundária
void diagonalSecundaria(int vetor[])
{
   // variáveis
   int i;

   // loop para exibir os valores do vetor
   for(i = 0; i < SIZE; i++)
      // exibir valores
      printf("%3d", vetor[i]);

} // end diagonal principal

// addValor
int main()
{
   // matrizes
   int matriz[SIZE][SIZE];
   int vetor[SIZE];

   srand(time(NULL)); // semente rand
   
   // adiciona valores
   add(matriz);
   addDiagSecundaria(matriz, vetor);

   // exibe valores das Matrizes
   printf("\nmatriz:\n");
   exibe(matriz);

   printf("\nDiagonal secundaria:\n");
   diagonalSecundaria(vetor);

   printf("\n\n");
   return 0;
} // end main