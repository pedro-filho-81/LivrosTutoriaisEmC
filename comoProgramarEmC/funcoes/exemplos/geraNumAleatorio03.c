/**
 * Fig. 5.7: fig05_07.c  2 Inteiros escalados e 
 * deslocados, produzidos por 1 + rand()% 6
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 125). Edição do Kindle. 
 * 12/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variável
   int i; // contador

   // loop for para exibir valores
   for ( i = 1; i <= 20; i++)
   {
      // exibe números alea
      printf("%10d", 1 + rand() % 6);

      if (i % 5 == 0)
      {
         printf("\n");
      } // end if      
   } // end for

   return 0;

} // end main