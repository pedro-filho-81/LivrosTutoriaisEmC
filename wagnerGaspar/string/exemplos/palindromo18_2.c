/**
 * Programa para descobrir se a palavra é palindroma
 * segunda versão
 * Palindromos: ama, osso, arara, radar, reviver
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // string
   char palavra[30]; // principal
   char copia[30]; // cópia do vetor principal

   // variáveis
   int i = 0, side = 0, iguais = 0; 

   // entrada de dados
   printf("Digite uma palavra: ");
   scanf(" %30[^\n]", palavra);

   side = strlen(palavra); // side recebe o tamanho da palavra

   //  enquanto tamanho maior que o contador faça
   for( i = 0; i < strlen(palavra); i++)
   {
      // copia recebe a palavra invertida
      copia[i] = palavra[side - 1];
      // decrementa o tamanho
      side--;
   } // end for
   // cópia recebe o final da string
   copia[i] = '\0'; 

   // tamanho recebe o tamanho da palavra
   side = strlen(palavra);

   // exebe a palavra e acópia
   printf("Original: %s\nCopia: %s\n", palavra, copia);

   // for para verificar se a palavra é igual a copia
   for ( i = 0; i < side; i++)
   {
      if (palavra[i] == copia[i])
      {
         iguais++;
      }
   } // end for

   // verifica se tamanho é igual a iguais
   if (side == iguais)
   {
      printf("%s eh palindroma...\n", palavra);
   } else {
      printf("%s nao eh palindroma...\n", palavra);
   } // end else     
   
   return 0; //  programa ok

} // end main