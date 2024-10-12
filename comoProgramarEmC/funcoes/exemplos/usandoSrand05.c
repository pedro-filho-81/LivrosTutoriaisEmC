/**
 * Fig. 5.9: fig05_09.c  
 * Randomizando o programa de lançamento de dado
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 128). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variáveis
   int i; // contador
   unsigned seed; // usado para criar semente para rand()

   // entrada de dados
   printf("Digite a semente: ");
   scanf("%u", &seed);

   srand(seed); // inicia gerador de números aleatórios

   // loop for
   for ( i = 1; i <= 10; i++)
   {
      // escolhe número entre 1 e 6
      printf("%10d", 1 + (rand() % 6));

      // se contador divisivel por 5
      if (i % 5 == 0)
      {
         printf("\n");
      } // end if      
   } // end for

   return 0;   

} // end main