/**
 * Com gerar números aleatórios em uma matriz com as
 * funções srand() e rand()
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 3
#define COLUNA 4

// função para adicionar valores aleatórios
void add(int matriz[][COLUNA])
{
   int i, j;

   // loop para adicionar valores as matrizes
   for ( i = 0; i < LINHA; i++)
   {
      for ( j = 0; j < COLUNA; j++)
      {
         // adiciona valores aleatóris as matrizes A e B
         matriz[i][j] = 1 + rand() % 50;
      } // end for coluna      
   } // end for linha   
} // end add

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
   
   // variáveis
   int i, j;

   // gera sementa para rand
   srand(time(NULL));

   // chama a função add
   add(matA);

   // chama função
   printf("\nmatrizA:\n");
   display(matA);
   
   printf("\n\n");
   return 0;
} // end main