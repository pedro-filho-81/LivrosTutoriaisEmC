/**
 * 13) Escreva um programa que recebe uma string S e 
 * dois valores inteiros não negativos i e j. Em 
 * seguida, imprima os caracteres contidos no 
 * segmento que vai de i a j da string S.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 140). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   // string
   char str1[50];

   // variáveis começão em zero
   int i = 0, j = 0, k = 0;

   printf("\nCONVERTE DECImAL Em CARACTERES\n");

   // entrada de dados
   printf("Digite dois valores maiores que zero\npara ver os caracteres deles: ");
   scanf("%d%d", &i, &j);

   // display
   printf("\nOs caracteres entre %d e %d sao: \n", i, j);

   // loop para ae
   printf("Os caracteres entre %d e %d sao: \n", i, j);

   // loop para adicionar os caracteres na string
   for ( i = i; i < j; i++)
   {
      // string recebe os caracteres
      str1[k] = ("%c", i);
      // incrementa o índice k em 1
      k++; 
   } // end for

   // loop para exibir os caracteres da string
   for ( i = 0; i < strlen(str1); i++)
   {
      // exibe os caracteres da string
      printf("%c ", str1[i]);
   } // end for
   
   // pula linhas
   printf("\n\n");

   return 0; // programa ok

} // end main