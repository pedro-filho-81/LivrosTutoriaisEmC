/**
 * Fig. 5.14: fig05_14.c  
 * 2 Função recursiva fatorial
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 139). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>

// protótipo
long fatorial(long number);

int main()
{
   // variável
   int i;

   // loop for para calcular o fatorial
   for ( i = 0; i <= 10; i++)
   {
      // exibe o fatorial de i
      printf("%2d! = %ld\n", i, fatorial( i ));
   } // end for 

   return 0; // programa ok
   
} // end main

// função fatorial
long fatorial( long number )
{
   // se number igual a 1
   if (number == 0)
   {
      // retorna 1
      return 1;
   } else { // se não
      // retorna o fatorial de number
      return (number * fatorial( number - 1));
   } // end else
   
} // end fatorial