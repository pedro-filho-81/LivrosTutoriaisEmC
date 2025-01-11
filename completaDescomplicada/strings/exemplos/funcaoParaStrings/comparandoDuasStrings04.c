/**
 * Para saber se duas strings são iguais usa-se a função 
 * strcmp(str1, str2):
 * A função strcmp(str1, str2) compara posição a posição 
 * as duas strings (str1 e str2) e retorna um valor 
 * inteiro igual a zero, no caso de as duas strings serem iguais.
 * A função strcmp(str1, str2) é case-sensitive. 
 * Isso significa que letras maiúsculas e minúsculas 
 * tornam as strings diferentes.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // cria um array de caracteres
   // todo array de caracteres é uma string
   // essa string vai ser comparada com str2
   char str1[50] = "Eu sou a origem.";
   // essa string vai se comparada com str1
   char str2[50] = "Eu sou a origem."; 
 
   printf("\nUsando strcmp(str1, str2)"
            "\nComparamos o conteudo de str1 com str2.\n");

   printf("A string:\n\tchar str1[50] = \"%s\";"
            "\nEh comparada com:\n\tchar str2[50] = \"%s\";"
            "\nUsando strcmp(str1, str2) para comparacao.", str1, str2, strcmp(str1, str2));
   
   printf("\nSe forem iguais retorna 0.");

   // exibe a comparação
   printf("\n\tif(strcmp(str1, str2) == 0)");
   printf("\n\t   printf(\"Strings iguais.\");");
   printf("\n\telse");
   printf("\n\t   printf(\"Strings diferentes.\")");

   // verifica se a resposta é igual a zero 0
   printf("\nResposta: ");
   if (strcmp(str1, str2) == 0)
      printf("Strings iguais.");
   else
      printf("Strings diferentes.");

   printf("\n\n");
   return 0;
} // end main