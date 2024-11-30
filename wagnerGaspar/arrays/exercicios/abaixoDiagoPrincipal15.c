/**
 * Faça um programa que imprima na tela apenas 
 * os valores abaixo da diagonal principal 
 * de uma matriz 4 x 4.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

// add matrizes
void addA(int matriz[][SIZE])
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

// function exibir
void exibeAbaixo(int matriz[][SIZE])
{
   // variáveis
   int i, j;

   // loop para exibir os valores da matriz
   for ( i = 0; i < SIZE; i++)
   {
      for ( j = 0; j < SIZE; j++)
      {
         // verifica se os valores da matriz
         // são maiores que a diagonal principal
         if(i > j) // se verdade
            // imprime os valores abaixo da diagonal
            printf("%5d", matriz[i][j]);
      } // end for j
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
      printf("%5d", vetor[i]);

} // end diagonal principal

int main()
{
   // matriz
   int matriz[SIZE][SIZE];
   int diagPrincipal[SIZE];

   srand(time(NULL));

   // exibe a matriz
   addA(matriz);
   printf("\nmatriz original:\n");
   exibe(matriz);

   addDiagPrincipal(matriz, diagPrincipal);
   printf("Diagonal principal:\n");
   diagonalPrincipal(diagPrincipal);

   // exibe abaixo
   printf("\nValores abaixo da diagonal:\n");
   exibeAbaixo(matriz);

   printf("\n\n");
   return 0;
} // end main