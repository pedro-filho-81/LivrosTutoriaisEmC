/**
 * strcmp() Compara os valores ASCII de caracteres em 
 * duas strings para determinar qual string tem um valor 
 * mais alto
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // strings
   char texto[50];
   char frase[50];
   char *resposta; // para função strstr(texto, pesquisa)

   printf("\nPESQIOSA PALAVRA NO TEXTO\n");
   
   // data entry
   printf("Digite um texto: ");
   scanf(" %50[^\n]", texto);

   printf("Digite uma frase ou uma \npalavra a pesquisar: ");
   scanf(" %50[^\n]", frase);

   // ponteiro resposta recebe o endereço da pesquisa
   // ou NULL se frase/palavra não estiver contida no texto
   resposta = strstr(texto, frase);

   // se a resposta for diferente de nula
   if (resposta != NULL) // se verdade
   {
      // exibe
      printf("A frase/palavra %s esta contida na frase \n%s\n\n", frase, texto);
   } // end if
   else { // se falso
      // exibe
      printf("A frase/palavra %s\nNao Esta contida no texto: %s\n\n", frase, texto);
   } // end else

   return 0; // programa okay

} // end main