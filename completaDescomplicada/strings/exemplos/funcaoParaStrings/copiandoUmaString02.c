/**
 * A única maneira de atribuir o conteúdo de uma 
 * string a outra é copiar elemento por elemento, de 
 * uma string para outra.
 * A função [strcpy(destino, origem)] copia a 
 * sequência de caracteres contida em origem para o 
 * array de caracteres destino e retorna o endereço da 
 * string destino.
 * Para evitar estouro de buffer, o tamanho do array destino 
 * deve ser longo o suficiente para conter a sequência 
 * de caracteres contida em origem.  
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (pp. 137-138). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // cria um array de caracteres
   // todo array de caracteres é uma string
   char str1[50] = "Array de caracteres.";
   char str2[50]; // essa string vai receber str1
 
   printf("\nUsando strcpy(destino, origem)"
            "\nColocamos o conteudo da origem no destino.");

   printf("\nA string:\nchar str1[50] = \"%s\""
            "\nFoi copiada para:\nchar str2[50] = \"%s\"."
            "\nUsando strcpy(str2, str1).", 
            str1, strcpy(str2, str1));
   
   printf("\n\n");
   return 0;
} // end main