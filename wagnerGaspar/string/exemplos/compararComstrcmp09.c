/**
 * aula 136:
 * Comparando duas strings com a função strcmp(str1, str2)
 * se as duas strings são iguais strcmp retorna o valor 0
 * se a primeira string ocorre primeiro que a segunda retorna -1
 * se a segunda string ocorre primeiro que a primeira retorna 1
 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
   // vetores de caracteres
   char palavra1[50] = {"maria."};
   char palavra2[50] = {"maria."};

   printf("\nComparacao de strings com:\nstrcmp(str1, str2).");
   printf("\npalavra1[50] = {\"maria.\"};\npalavra2[50] = {\"maria.\"};");
   printf("\nstrcmp(palavra1, palavra2)");
   printf("\nResultado: %d para strings iguais.\n\n", 
            strcmp(palavra1, palavra2));

   // vetores de caracteres
   char palavra3[50] = {"Amanda"};
   char palavra4[50] = {"Cleonice"};

   printf("\nComparacao de strings com:\nstrcmp(str1, str2).");
   printf("\npalavra3[50] = {\"Amanda.\"};\npalavra4[50] = {\"Cleonice.\"};");
   printf("\nstrcmp(palavra3, palavra4)");
   printf("\nResultado: %d para strings em ordem crescente.\n\n", 
            strcmp(palavra3, palavra4));

   // vetores de caracteres
   char palavra5[50] = {"Cleonice"};
   char palavra6[50] = {"Amanda"};

   printf("\nComparacao de strings com:\nstrcmp(str1, str2).");
   printf("\npalavra5[50] = {\"Cleonice.\"};\npalavra6[50] = {\"Amanda.\"};");
   printf("\nstrcmp(palavra5, palavra6)");
   printf("\nResultado: %d para strings em ordem Decrescente.\n\n", 
            strcmp(palavra5, palavra6));

   return 0;

} // end main