/**
 * Faça uM prograMa que iMpriMa na tela a diagonal
 * principal de uMa Matriz 5 x 5
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

// add matrizes
void add(int matriz[][SIZE])
{
   // variáveis
   int l, c;

   for( l = 0; l < SIZE; l++)
      for(c = 0; c < SIZE; c++)
         matriz[l][c] = 1 + rand() % 100;
} // end matrizes

// add diagonal principal
void addDiagPrincipal(int matriz[][SIZE], int vetor[])
{
   int l, c;

   // loop para verificar valores da matriz
   for(l = 0; l < SIZE; l++)
      for( c = 0; c < SIZE; c++)
      {
         // verifica se linha é igual a coluna
         if(l == c) // se verdade
         {
            // vetor recebe o valor da matriz
            vetor[l] = matriz[l][c];
         } // end if 
      } // end if
} // end add diagonal principal

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

// exibe diagonal principal
void diagonalPrincipal(int vetor[])
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
   addDiagPrincipal(matriz, vetor);

   // exibe valores das Matrizes
   printf("\nmatriz:\n");
   exibe(matriz);

   printf("\nDiagonal principal:\n");
   diagonalPrincipal(vetor);

   printf("\n\n");
   return 0;
} // end main