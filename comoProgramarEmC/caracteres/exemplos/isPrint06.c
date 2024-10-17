/**
 * Fig. 8.4: fig08_04.c  
 * Usando funções isprint caractere imprimível.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 263). Edição do Kindle. 
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
   printf("\nCARACTERE ImPRImIVEL.\n");
   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
            "De acordo com isprint:",
            isprint('$') ? "$ eh um " : "$ nao eh um ", "Caractere imprimivel.",
            isprint('\a') ? "\\a eh um " : "\\a nao eh um ", "caractere imprimivel.",
            isprint('\t') ? "\\t eh um " : "\\t nao eh um ", "caractere imprimivel.",
            isprint('A') ? "A eh um " : "A nao eh um ", "caractere imprimivel.");

   return 0;
} // end main