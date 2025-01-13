/**
 * 8) Construa um programa que leia duas strings do 
 * teclado. Imprima uma mensagem informando se a segunda 
 * string lida está contida dentro da primeira.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 140). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
   // strings
   char str1[SIZE];
   char str2[SIZE];
   char *resp;

   printf("\nElemento contido ou nao contido: ");

   printf("\nDigite uma palavra ou um texto: ");
   gets(str1);
   
   printf("str1 = %s\n", str1);

   printf("Digite outra palavra ou texto: ");
   gets(str2);
   printf("str2 = %s\n", str2);

   *resp = strstr(str1, str2);
   printf("\nResposta = {%s}\n", resp);

   if(resp != NULL)
      printf("\n[%s] esta contido na primeira string %s", str2, resp);
   else
      printf("\nResposta = [%s] nao esta contido.\n", resp);

   printf("\n\n");
   return 0;
} // end main