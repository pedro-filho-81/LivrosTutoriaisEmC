/**
 * Para obter o tamanho de uma string, usa-se a função 
 * strlen(), a função strlen() recebe 
 * como parâmetro uma string e retorna o número de 
 * caracteres armazenados na string:
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 137). 
 * GEN LTC. Edição do Kindle.  
 */
#include <stdio.h>
#include <stdlib.h>

// biblioteca string
#include <string.h>

int main()
{
   // cria um array de caracteres
   // todo array de caracteres é uma string
   char str[50] = "Array de caracteres.";
 
   printf("\nA string:\nchar str[50] = \"%s\"\ntem %d caracteres."
            "\nEspacos em branco tambem sao caracteres.", 
            str, strlen(str));
   
   printf("\n\n");
   // system("pause");
   return 0;
} // end main