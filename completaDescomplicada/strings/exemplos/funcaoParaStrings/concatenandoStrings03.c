/**
 * A operação de concatenação é outra tarefa bastante 
 * comum, para fazer a concatenação de duas strings, 
 * usa-se a função strcat(destino, origem): 
 * A função strcat(destino, origem) copia a 
 * sequência de caracteres contida em origem para o 
 * final da string destino e retorna o endereço da 
 * string destino. 
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 138). 
 * GEN LTC. Edição do Kindle. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // cria um array de caracteres
   // todo array de caracteres é uma string
   char str1[50] = "Eu sou a origem.";
   // essa string vai receber a string str1
   char str2[50] = "Eu sou o destino -> "; 
 
   printf("\nUsando strcat(destino, origem)"
            "\nColocamos o conteudo da origem\nno final da string destino.\n");

   printf("A string:\n\tchar str1[50] = \"%s\";"
            "\nFoi concatenada para:\n\tchar str2[50] = \"%s\";"
            "\nUsando strcat(str2, str1) para concatenacao.", str1, str2, strcat(str2, str1));

   printf("\n\n");
   return 0;
} // end main