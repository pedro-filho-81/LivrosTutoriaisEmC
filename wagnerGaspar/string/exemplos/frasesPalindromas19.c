/**
 * Programa para descobrir se uma fraes é palindroma
 * Frases Palindromas: 
 * luz azul,
 * anotaram a data da maratona,
 * roma me tem amor,
 * a grama é amarga,
 * a mãe te ama.
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // string
   char palavra[50]; // principal
   char copia[50]; // cópia do vetor principal

   // variáveis
   int i = 0, j = 0, side = 0, diferentes = 0; 

   // entrada de dados
   printf("Digite uma frase: ");
   scanf(" %30[^\n]", palavra);
   
   // loop for para remover sinais, simbolos 
   // e acentuações da frase.
   for( i = 0; i < strlen(palavra); i++)
   {
      // se palavra diferente de: ("?!. ")
      if (palavra[i] != '?' && palavra[i] != '!' && palavra[i] != ' ' && palavra[i] != '.')
      {
         // copia recebe a frase digitada
         // sem sinais, simbolos e acentuações
         copia[j++] = palavra[i];
      }// end if
   } // end for
   // cópia recebe o caractere final da string ('\0')
   copia[j] = '\0'; 

   // exibe
   printf("Original: %s\nCopia: %s\n", palavra, copia);

   // tamanho recebe o tamanho da cópia
   side = strlen(copia);
   side--; // decrementa o tamanho
   
   // loop for para verificar se a cópia 
   // é diferente a copia
   for ( i = 0; i < strlen(copia); i++)
   {
      if (copia[i] != copia[side]) // se verdade
      {
         // incrementa diferente
         diferentes++;
      } // end if
      side--; // decrementa o tamanho
   } // end for

   // verifica se diferente é igual a zero
   if (diferentes == 0) // se verdade
   {
      // exibe
      printf("%s eh palindroma...\n", palavra);
   } else { // se falso
      // exibe
      printf("%s nao eh palindroma...\n", palavra);
   } // end else     
   
   return 0; //  programa ok

} // end main