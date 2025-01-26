/**
 * 9) Construa um programa que leia duas strings do 
 * teclado. Imprima uma mensagem informando quantas vezes 
 * a segunda string lida está contida dentro da primeira.
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
   int count = 0;

   printf("\nElemento contido ou nao contido: ");

   printf("\nDigite uma palavra ou um texto: ");
   gets(str1);
   
   printf("str1 = %s\n", str1);

   printf("Digite outra palavra ou texto: ");
   gets(str2);

   printf("str2 = %s\n", str2);

   *resp = strstr(str1, str2);
   
   printf("\nResposta = {%s}\n", resp);

   // verifica se resp é diferente de nulo
   if(resp != NULL) // se verdade
   {
      // exiba
      printf("\n[%s] esta contido na primeira string %s", str2, resp);

      // loop para percorrer a string
      for(int i = 0; str1[i] != '\0'; i++)
      {
         if(resp != NULL && str2[i] == str1[i])
         {
            count++;
         }
      } // end for
   } // end if diferente de nulo
   else // se não
      // exiba
      printf("\nResposta = [%s] nao esta contido.\n", resp);

      printf("\nCount = %d\n", count);

   printf("\n\n");
   return 0;
} // end main