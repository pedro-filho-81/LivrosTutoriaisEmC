/**
 * Dadas duas matrizes A e B 3 x 3 faça um programa para calcular a soma das matrizes e salvar em uma matrizes C. Imprima as matrizes. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

// add matrizes
void add(int matriz[][SIZE])
{
   // variáveis
   int l, c;

   for( l = 0; l < SIZE; l++)
      for(c = 0; c < SIZE; c++)
         matriz[l][c] = 1 + rand() % 100;
} // end matrizes

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

// addValor
int main()
{
   // matrizes
   int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

   // variáveis
   int l, c;

   srand(time(NULL)); // semente rand
   
   // adiciona valores
   add(A);
   add(B);

   // loop para preencher a matriz C
   for(l = 0; l < SIZE; l++)
      for(c = 0; c < SIZE; c++)
         // matriz C recebe a soma 
         // dos valores de A e B 
         C[l][c] = A[l][c] + B[l][c];

   // exibe valores das Matrizes
   printf("\nmatrizA:\n");
   exibe(A);
   printf("\nmatrizB:\n");
   exibe(B);
   printf("\nmatrizC:\n");
   exibe(C);

   printf("\n\n");
   return 0;
} // end main