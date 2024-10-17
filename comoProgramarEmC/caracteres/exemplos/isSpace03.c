/**
 * Fig. 8.4: fig08_04.c  
 * Usando funções isspace,
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 263). Edição do Kindle. 
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
   printf("\nVerifica se eh um espaco em branco:\n");
   printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
          "De acordo com isspace:",
          "New line (\\n)", isspace('\n') ? " eh um " : "nao eh um ", "caractere de espaco em branco", 
          "Tabulacao horizontal (\\t)", isspace('\t') ? " eh um " : "nao eh um ", "caractere de espaco em branco", isspace('%') ? "(%%) eh um " : "(%%) nao eh um ", "caractere de espaco em branco");
   
   return 0;
   
} // end main