/**
 * Fig. 8.4: fig08_04.c  
 * Usando funções iscntrl caractere de controle,
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 263). Edição do Kindle. 
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
   printf("\nCARACTERES DE CONTROLE");
   printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
          "\nDe acordo com iscntrl:",
          "New line (\\n): ", iscntrl('\n') ? "Eh um " : "nao eh um ", "caractere de contrloe.",
          "Tabulacao horizontal (\\t): ", iscntrl('\t') ? "Eh um " : "nao e um ", "caractere de controle.", 
          iscntrl('@') ? "@ Eh um " : "@ nao eh um ", "caractere de controle.");

} // end main