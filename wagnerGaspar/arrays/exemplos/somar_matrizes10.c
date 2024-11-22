/**
 * Somar valores de 2 matrizes e salvar em outra matriz
 * Exemplo: matrizC = matrizA + matrizB
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 3
#define COLUNA 4

// função display
void display(int matriz[][COLUNA])
{
   int i, j;
   
   // loop para linha da matriz
   for ( i = 0; i < LINHA; i++)
   {  // loop para coluna da matriz
      for ( j = 0; j < COLUNA; j++)
      {
         // exibe os elementos da matriz
         printf("%4d", matriz[i][j]);
      } // end for colunas
      printf("\n");
   } // end for linhas
} // end display

int main()
{  
   // matrizes
   int matA[LINHA][COLUNA] = {0};
   int matB[LINHA][COLUNA] = {0};
   int matC[LINHA][COLUNA] = {0};

   // variáveis
   int i, j;

   // gera sementa para rand
   srand(time(NULL));

   // loop para adicionar valores as matrizes
   for ( i = 0; i < LINHA; i++)
   {
      for ( j = 0; j < COLUNA; j++)
      {
         // adiciona valores aleatóris as matrizes A e B
         matA[i][j] = 1 + rand() % 50;
         matB[i][j] = 1 + rand() % 50;
      } // end for coluna      
   } // end for linha   

   // loop para adicionar valores as matrizes
   for ( i = 0; i < LINHA; i++)
   {
      for ( j = 0; j < COLUNA; j++)
      {
         // soma as matrizes A e B e atribui os valores
         // a matrizC
         matC[i][j] = 
         matA[i][j] + 
         matB[i][j];
      } // end for coluna      
   } // end for linha   

   // chama função
   printf("matrizA:\n");
   display(matA);

   printf("matrizB:\n");
   display(matB);

   printf("matrizC:\n");
   display(matC);
   
   printf("\n\n");
   return 0;
} // end main