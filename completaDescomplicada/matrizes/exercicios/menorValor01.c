#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

/**
 * 1) Faça um programa que leia uma matriz de tamanho 
 * 3 × 3. Imprima na tela o menor valor contido nessa 
 * matriz.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 129). 
 * GEN LTC. Edição do Kindle. 
 * 11/10/2024
 */

int main()
{
   // matriz
   int matriz[SIZE][SIZE];

   // variáveis
   int i = 0, j = 0, vlIgual;
   int alea = 0, menor = 0;
   // int menor = 0;

   srand(time(NULL));

   for ( i = 0; i < SIZE; i++)
   {
      for ( j = 0; j < SIZE; j++)
      {
         alea = 1 + rand() % 50;
         matriz[i][j] = alea;         
      }      
   }
   
   printf("\n");

   // exibir valores
   for (int i = 0; i < SIZE; i++)
   {
      for (int j = 0; j < SIZE; j++)
      {
         printf("%3d", matriz[i][j]);
      } // end for col
      printf("\n");
   } // end for linha   

   printf("\n");
   
   return 0;

} // end main