/**
 * cópia string1 para string2
 */
#include <stdio.h>

int main()
{
   // variável
   int i;
   // strings
   char str1[20] = "Hello World!";
   char str2[20];

   printf("\nCopia str1 para str2 usando o loop for,\n");
   printf("\nOriginal:\nstr1[20] = \"%s\"\n", str1);

   // loop para copiar a str1 para str2
   // faça enquanto str1 diferente de fim da string
   // str1[i] != '\0'
   for ( i = 0; str1[i] != '\0'; i++)
   {
      // str2 recebe os caracteres de str1
      str2[i] = str1[i];
   } // fim for i
   // str2 recebe caractere de fim de string
   str2[i] = '\0';

   // exibe resultado
   printf("\nCopia de str1:\nstr2[20] = \"%s\"\n", str2);
   
   printf("\n\n");
   return 0;
} // end main