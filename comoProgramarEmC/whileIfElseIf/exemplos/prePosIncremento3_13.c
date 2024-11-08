/**
 * Figura 3.13: fig03_13.c  
 * Pré-incrementando e pós-incrementando
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 65). Edição do Kindle. 
 * 08/10/2024
 */
#include <stdio.h>

int main()
{
   // variável
   int c;

   // demonstra pós-incremento
   c = 5;
   printf("\nPos-incremento.\n");
   printf("c = %d\n", c);
   printf("c++ = %d\n", c++);
   printf("c = %d\n\n", c);

   // demonstra pré-incremento
   c = 5;
   printf("\nPre-incremento.\n");
   printf("c = %d\n", c);
   printf("++c = %d\n", ++c);
   printf("c = %d\n\n", c);

   return 0;
} // end main