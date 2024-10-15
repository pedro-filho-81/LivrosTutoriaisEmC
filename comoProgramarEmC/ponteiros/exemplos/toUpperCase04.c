/**
 * Fig. 7.10: fig07_10.c  
 * 2 Convertendo uma string em maiúsculas usando um  3 
 * ponteiro não constante para dados não constantes
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 217). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// protótipo
void convertToUpperCase( char *sPtr );

int main()
{
   // variável
   char string[] = "caracteres e R$32.98";

   printf("\nA string antes da conversao eh: %s\n", string);

   convertToUpperCase(string);

   printf("A string apos a conversao eh: %s\n\n", string);

   return 0;

} // end main

// função convertToUpperCase
void convertToUpperCase( char *sPtr )
{
   // enquanto o ponteiro diferente de fim de string '\0' 
   while ( *sPtr != '\0')
   {
      // se o ponteiro for minúsculo
      if (islower(*sPtr)) // se verdade
      {
         // torne o valor do ponteiro maiúsculo
         *sPtr = toupper( *sPtr );
      } // end if  
      ++sPtr;    
   } // end while
   
} // end convert