/**
 * 15) Faça um programa que leia uma matriz A de 
 * tamanho 5 × 5. Em seguida, calcule e imprima 
 * a matriz B, sendo que B = A2.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 130). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 5

// procedimento para adicionar valores no array
// e somar os valores adicionados e retornar
int adicionar(int matrizA[][SIZE], int matrizB[][SIZE])
{
   // variáveis
   int i, j;

   // loop para as linhas
   for ( i = 0; i < SIZE; i++)
   {
      // loop para as colunas
      for( j = 0; j < SIZE; j++)
      {
         // adiciona valores no array
         matrizA[i][j] = 1 + rand() % 50;

         // matrizB recebe o quadrado da matrizA
         matrizB[i][j] = floor( pow(matrizA[i][j], 2));
      } // end coluna
   } // end for linha
} // end adicionar


// procedimento para exibir valores da matriz 
void exibir(int matriz[][SIZE])
{
   // variáveis
   int i, j;

   // cabeçalho
   printf("Colunas:     ");
   // loop para exibir os números da coluna
   for ( i = 0; i < SIZE; i++)
   {
      // exibe os números da coluna
      printf("%7d", i + 1);
   } // end colunas
   // pula linha
   printf("\n");
   
   // loop para adicionar valores na matriz
   for ( i = 0; i < SIZE; i++)
   {
      // cabeçalho das linhas
      printf("%s => %3d:", "Linha", i + 1);

      // loop para as colunas
      for ( j = 0; j < SIZE; j++)
      {
         // exibe os valores da matriz
         printf("%7d", matriz[i][j]);
      } // end for j
      // pula linha
      printf("\n");      
   } // end for i
} // end adicionar


int main()
{
   // matriz
   int matrizA[SIZE][SIZE];
   int matrizB[SIZE][SIZE];

   srand(time(NULL));

   // procedimento
   adicionar(matrizA, matrizB);

   printf("\nmatrizA:\n");
   exibir(matrizA);

   printf("\nmatrizB quadrado de A:\n");
   exibir(matrizB);

   printf("\n\n");
   return 0;
} // end main