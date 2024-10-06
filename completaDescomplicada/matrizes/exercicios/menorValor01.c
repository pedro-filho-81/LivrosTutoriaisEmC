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

   do // faça
   {
      // gera número entre 1 e 50
      alea = 1 + rand() % 50;
      // informa que não existe número na matriz
      vlIgual = 0;

      // loop para verificar se existe valor na matriz
      for ( i = 0; i < SIZE; i++)
      {
         for ( j = 0; j < SIZE; j++)
         {
            // verifica se na matriz tem valor igual
            if (matriz[i][j] == alea) // se verdade
            {
               vlIgual = 1; // verdade
               break;
            } // end if igual
                        
         } // end for col         
      } // end for row 

      // se vlIgual igual a zero
      if (vlIgual == 0)
      {
         // matriz recebe alea
         matriz[i][j] = alea;
         i++; // incrementa i
         j++; // e incrementa j
      } // end if

      // enquanto i menor que size
   } while (i < SIZE);

   printf("\n");

   // exibir valores
   for ( i = 0; i < SIZE; i++)
   {
      for ( j = 0; j < SIZE; j++)
      {
         printf("%3d", matriz[i][j]);
      } // end for col
      printf("\n");
   } // end for linha   

   printf("\n");
   
   return 0;

} // end main