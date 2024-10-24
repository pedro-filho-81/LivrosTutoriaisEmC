/**
 * A função strchr() retorna o endereço para um ponteiro para a 
 * posição da primeira ocorrência de um caractere 
 * em uma string.
 * A função strchr() é definida na biblioteca <string.h>.
 * 
 */

#include <stdio.h>
#include <string.h>

int main()
{
   // cria string
   char palavra[] = {"abacate"};
   // cria ponteiro
   char *ptrPalavra;

   // ptrPalavra recebe o endereço da primeira ocorrência da letra a
   ptrPalavra = strchr(palavra, 'a');

   printf("\nDeclara, cria e inicializa a String:");
   printf("\nchar palavra[] = {\"abacate\"};");
   printf("\nDeclara ponteiro:\nchar *ptrPalavra;");
   printf("\nptrPalavra recebe o endereco retornado por strchr()");
   printf("\nptrPalavra = strchr(palavra, 'a');");
   printf("\nO endereco recebido por ptrPalavra eh: %p\n", ptrPalavra);
   printf("O endereco de:\nchar palavra[] = {\"abacate\"}; eh: %p\n", &palavra);

   printf("\n"); // pula linha
   return 0;

} // end main