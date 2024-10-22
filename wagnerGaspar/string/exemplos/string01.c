#include <stdio.h>
#include <stdlib.h>
/**
 * Uma String é uma sequência de caracteres
 * String na linquagem C é um vetor do tipo char
 * caracteres, por exemplo:
 * cria um vetor para 100 caracteres
 * char vetor[100] = {"Tudo entre aspas duplas é uma string."};
 */
#include <stdio.h>
int main()
{   // 1º) cria um vetor para armazenar uma 
   // sequência de caracteres
   // Um vetor do tipo char com nome palavras 
   // recebe uma string entre aspas duplas
   char palavras[] = ("\nOi. Vamos aprender a programar com a linguagem C?\n\n");

   // exibe o conteúdo do vetor palavras
   printf("%s", palavras);

   return 0;

} // end main