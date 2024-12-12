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
   printf("\nAntes de main: Criamos o procedimento:"
            "\nQue recebe como parametro o ponteiro"
            "\nchar *sPtr ponteiro para caracteres."
            "\n\tvoid convertToUpperCase( char *sPtr );\n");

   // variável
   char string[] = "caracteres e R$32.98";

   printf("\nEm main, Criamos um vetor de caracteres"
            "\nque recebe a string: \"caracteres e R$32.98\";"
            "\n\tchar string[] = \"caracteres e R$32.98\";\n");

   printf("\nA string antes do processamento eh minuscula:\n\t%s\n", string);
   printf("\nEm main, Chamamos o procedimento:"
            "\n\tconvertToUpperCase(string);"
            "\nQue recebe como argumento o vetor string");

   convertToUpperCase(string);

   printf("\n\nO procedimento apos o processamento"
            "\nfaz a conversao dos caracteres para maiuscula: \n\t%s\n\n", string);

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