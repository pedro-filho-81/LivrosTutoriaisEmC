/**
 * usando as funções isdigit, isalpha, 
 * isalnum, isxdigit
 * Pedro, 09/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // para trabalhar com caracteres

int main()
{
   // função isdigit retorna 1 para verdadeiro e 0 para falso
   printf("%s\n%s%s\n%s%s\n\n",
            "De acordo com isdigir: ",
            isdigit('8') ? "8 eh um " : "8 nao eh um ", "digito",
            isdigit('#') ? "# eh um " : "# nao eh um ", "digito");

   // função isalpha retorna 1 para verdadeiro e 0 para falso
   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
         "De acordo com isalpha:",
         isalpha('A') ? "A eh uma " : "A nao eh uma ", "Letra",
         isalpha('a') ? "a eh uma " : "a nao eh uma ", "Letra",
         isalpha('&') ? "& eh uma " : "& nao eh uma ", "letra",
         isalpha('4') ? "4 eh uma " : "4 nao eh uma ", "letra");         

         printf("%s\n%s%s\n%s%s\n%s%s\n\n",
                  "De acordo com isalnum: ",
                  isalnum('A') ? "A eh um " : "A nao eh um ", "digito ou uma letra",
                  isalnum('8') ? "8 eh um " : "8 nao eh um ", "digito ou uma letra",
                  isalnum('#') ? "# eh um " : "# nao eh um ", "digito ou uma letra");

      printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
            "De acordo com isxdigit: ",
            isxdigit('F') ? "F eh um " : "F nao eh um ", "digito hexadecimal.",
            isxdigit('J') ? "J eh um " : "J nao eh um ", "digito hexadecimal.",
            isxdigit('7') ? "7 eh um " : "7 nao eh um ", "digito hexadecimal.",
            isxdigit('$') ? "$ eh um " : "$ nao eh um ", "digito hexadecimal.",
            isxdigit('f') ? "f eh um " : "f nao eh um ", "digito hexadecimal.");  
            
   return 0;
} // end main