/**
 * Programa para descobrir se a palavra é palindroma
 * Palindromos: ama, osso, arara, radar, reviver
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // string
   char palavra[30]; // principal

   // variáveis
   int i = 0, side = 0, diferente = 0; 

   // entrada de dados
   printf("Digite uma palavra: ");
   scanf(" %30[^\n]", palavra);

   side = strlen(palavra); // side recebe o tamanho da palavra
   side--; // reduz o tamanho em 1
   i = 0; // inicializa o contador em zero

   // enquanto tamanho maior ou igual ao contador faça
   while (side >= i)
   {
      // verifica se a letra inicial 
      // é diferente da letra no final da palavra
      if (palavra[i] != palavra[side])
      {
         diferente++; // incrementa em 1
      } // end if
      i++; // incrementa o contador
      side--; // decrementa o tamanho em 1
   } // end while

   // verifica se diferente é igual a zero
   if (diferente == 0) // se verdade
   {
      // exibe
      printf("\n%s eh palindromo.\n\n", palavra);
   } else { // se false
      // exibe
      printf("\n%s nao eh palindromo.\n\n", palavra);
   } // end else   
   
   return 0; //  programa ok
} // end main