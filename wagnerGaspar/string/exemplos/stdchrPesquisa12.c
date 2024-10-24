/**
 * A função strchr() retorna um ponteiro para a 
 * posição da primeira ocorrência de um caractere 
 * em uma string.
 * A função strchr() é definida na biblioteca <string.h>.
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // cria string
   char palavra[] = {"Hello World"};
   // cria ponteiro
   char *charPtr = strchr(palavra, 'W');

   // verifica se a letra
   if (charPtr != NULL)
   {
      // exibe palavra
      printf("\nPalavra %s encontrada.\n\n", charPtr);
   } // end if   
} // end main