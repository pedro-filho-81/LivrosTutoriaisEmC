/**
 * aula 136:
 * Comparando duas strings com a função strcmp(str1, str2)
 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
   // vetores de caracteres
   char palavra1[50] = {"Oi."};
   char palavra2[50] = {"Bom dia."};

   printf("\n\nResultado: %d\n\n", strcmp(palavra1, palavra2));

   return 0;
} // end main