/**
 * A função strrchr() retorna um ponteiro para a posição 
 * da última ocorrência de um caractere em uma string.
 * A função strrchr() é definida na biblioteca C 
 * <string.h> do arquivo de cabeçalho.
 * Para encontrar a primeira ocorrência de um caractere 
 * em uma string, use a função strchr() 
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // variável para string
   char palavra[50] = {"abacate"};  
   // ponteiro para char
   char *letra;

   printf("\nCria uma string:\nchar palavra[50] = {\"abacate\"};");
   printf("\nToda string eh um vetor de caracteres");
   printf("\nDeclara um ponteiro:\nchar *letra;\n");

   // pesquisa com a função strchr()
   // exibe a primeira ocorrência da letra pesquisada
   // letra recebe o valor retornado da função strchr()
   letra = strchr(palavra, 'a');

   printf("\nPesquisa se na string existe a letra (a):");
   printf("\nletra = strchr(palavra, 'a');");

   // exibe resultado
   // imprime a letra a usando o ponteiro letra
   printf("\nExibe o valor armazenado no ponteiro *letra: %c", *letra);
   printf("\nExibe o valor armazenado no ponteiro *letra: %c", *(letra + 1));
   printf("\nExibe o valor armazenado no ponteiro *letra: %c", *(letra + 2));
   printf("\nExibe o endereco do vetor palavra %p", palavra);

   // usando a função strrchr(nome do vetor, caractere da pesquisa);
   letra = strrchr(palavra, 'a');

   printf("\n\nPesquisa se na string existe a letra (a):");
   printf("\nletra = strrchr(palavra, 'a');");

   // exibe resultado
   // imprime a letra a usando o ponteiro letra
   printf("\nExibe o valor armazenado no ponteiro *letra: %c", *letra);
   printf("\nExibe o valor armazenado no ponteiro *letra: %c", *(letra + 1));
   printf("\nExibe o valor armazenado no ponteiro *letra: %c", *(letra + 2));
   printf("\nExibe o endereco do vetor palavra %p", palavra);

   printf("\n\n");
   return 0;
} // end main