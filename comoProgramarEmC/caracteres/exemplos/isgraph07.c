/**
 * Fig. 8.4: fig08_04.c  
 * Usando a função isgraph caractere imprimível
 * diferente de espaço.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 263). Edição do Kindle. 
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
   printf("\nCARACTERES ImPRImIVEL\nDIFERENTE DE ESPACO:\n");
   printf("%s\n%s%s\n%s%s%s\n\n",
          "De acordo com isgraph:",
          isgraph('Q') ? "Q eh um " : "Q nao eh um ",
          "caractere imprimivel diferente de espaco.",
          "Espaco", isgraph(' ') ? " eh um " :" nao eh um ", "caractere imprimivel diferente de espaco." );
   return 0;
} // end main