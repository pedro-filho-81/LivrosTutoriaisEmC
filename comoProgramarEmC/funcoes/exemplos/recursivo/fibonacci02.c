/**
 * Fig. 5.15: fig05_15.c  
 * 2 Função recursiva fibonacci
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 141). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>

// protótipo
long fibonacci(long number);

int main()
{
   // variáveis
   long result; // valor de fibonacci
   long number; // entrada do usuário

   // entrada de dadps
   printf("Digite um inteiro: ");
   scanf("%ld", &number);

   result = fibonacci(number);

   printf("fibonacci( %ld ) = %ld\n", number, result);

   return 0;

} // end main

long fibonacci(long number)
{
   if (number == 0 || number == 1)
   {
      return number;
   } // end if
   else 
   {
      return fibonacci(number - 1) + fibonacci(number - 2);
   } // end else
   
} // end fivonacci