/**
 * A função strstr() retorna um ponteiro para a posição da 
 * primeira ocorrência de uma string em outra string.
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
   char retorno = 's';
   int i = 0;

   while (retorno == 's')
   {   
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
         printf("A frase/palavra %s esta contida na frase \n%s\n\n", frase, resposta);

      } // end if
      else { // se falso
         // exibe
         printf("A frase/palavra %s\nNao Esta contida no texto: %s\n\n", frase, resposta);
      } // end else

      // data entry   
      printf("\nDeseja continuar? (s/n): ");
      scanf(" %c", &retorno); // entrada do usuário

      // se retorno igual a n
      if (retorno == 'n')
      {
         // sair do programa
         break;
      } // end if sair
   } // end while

   return 0; // programa okay

} // end main