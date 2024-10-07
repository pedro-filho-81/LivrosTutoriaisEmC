/**
 * g)Elaborar um programa que leia uma matriz A de 
 * duas dimensões com quatro linhas e cinco colunas, 
 * armazenando nessa matriz os valores das 
 * temperaturas em graus Celsius. Construir a matriz B 
 * de mesma dimensão, em que cada elemento seja o 
 * valor da temperatura em graus Fahrenheit de cada 
 * elemento correspondente da matriz A. Apresentar ao 
 * final as matrizes A e B.
 * JOSÉ AUGUSTO N. G. MANZANO, JAYR FIGUEIREDO DE 
 * OLIVEIRA. Algoritmos (Portuguese Edition) (p. 403). 
 * Editora Saraiva. Edição do Kindle. 
 * Pedro, 06/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COLUmN 5

int main()
{
   // matrizes
   int cel[ROW][COLUmN];
   int fahren[ROW][COLUmN];

   int i, j;

   srand(time(NULL));

   // adiciona valor a matriz C
   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         cel[i][j] = rand() % 101;
         fahren[i][j] = cel[i][j] * 1.8 + 32;   
      } // end for j
   } // end for i

   // EXIBE A mATRIZ C
   printf("\nCelsius:\n");
   printf("                \n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", cel[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   // EXIBE A mATRIZ Fahrenheit
   printf("\nFahrenheit:\n");
   printf("                \n");
   // exibe matriz
   for ( i = 0; i < ROW; i++)
   {  printf("linha => %2d:", i + 1);
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", fahren[i][j]);
      } // end for j
      printf("\n");      
   } // end for i
   printf("\n");
   
   return 0;

} // end main