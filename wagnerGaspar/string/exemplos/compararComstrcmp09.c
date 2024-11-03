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

   printf("\nA funcao STRCMP(STR1, STR2)\ncompara as strings e retorna"
         "\nZero (0) se as strings sao iguais."
         "\nMenos Um (-1) se as strings estao em ordem crescente."
         "\nUm (1) se as strings estao em ordem decrescente.\n\n");

   printf("Strings iguais:");
   printf("\npalavra1[50] = {\"maria.\"};\npalavra2[50] = {\"maria.\"};");
   printf("\nstrcmp(palavra1, palavra2)");
   printf("\nRetorna: %d quando as strings iguais.\n", 
            strcmp(palavra1, palavra2));

   // vetores de caracteres
   char palavra3[50] = {"Amanda"};
   char palavra4[50] = {"Cleonice"};

   printf("\nStrings em ordem cresente:");
   printf("\npalavra3[50] = {\"Amanda.\"};\npalavra4[50] = {\"Cleonice.\"};");
   printf("\nstrcmp(palavra3, palavra4)");
   printf("\nRetorna: %d quando as strings estao em ordem crescente.\n", 
            strcmp(palavra3, palavra4));

   // vetores de caracteres
   char palavra5[50] = {"Cleonice"};
   char palavra6[50] = {"Amanda"};

   printf("\nStrings em ordem decrescentes:");
   printf("\npalavra5[50] = {\"Cleonice.\"};\npalavra6[50] = {\"Amanda.\"};");
   printf("\nstrcmp(palavra5, palavra6)");
   printf("\nResultado: %d para strings em ordem Decrescente.\n\n", 
            strcmp(palavra5, palavra6));

   return 0;

} // end main