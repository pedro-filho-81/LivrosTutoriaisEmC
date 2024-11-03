/**
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

int main()
{
   // strings
   char frase[SIZE];
   int contaVogais = 0;
   char consoantes[SIZE];
   int i = 0;
   int count;

   printf("\nCONTANDO AS VOGAIS\n");

   // entrada de dados
   // data entry
   printf("Digite uma frase: ");
   scanf(" %50[^\n]", frase);

   // exibe a frase
   // displays the phrase
   printf("Frase digitada: ");

   // loop for para contar as vogais
   for ( i = 0; i < strlen(frase); i++)
   {
      // se a frase tiver 'a' ou 'e' ou 'i' ou 'o' ou 'u'
      if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
      {
         // conte as vogais
         contaVogais++;
         frase[i] = '@'; // substitui a vogal

      } // end if      
   } // end for vogais

   frase[i] = '\0'; // frase recebe final da string

   printf("%s", frase); // displays the phrase

   // displays the phrase
   printf("\nTem %d vogais.\n", contaVogais);
   
   return 0; // programa ok

} // end main