/**
 * 1 /* Fig. 5.4: fig05_04.c  
 * 2 Achando o máximo de três inteiros
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 120). Edição do Kindle. 
 * 12/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// protótipo
int maximum(int x, int y, int z);

int main()
{
   // variáveis
   int num1, num2, num3;

   printf("Digite tres inteiros: ");
   scanf("%d%d%d", &num1, &num2, &num3);

   // exibe resultado com o valor retornado pela função
   printf("O maior valor eh: %d\n",  maximum(num1, num2, num3));

   return 0;

} // end main

// função maximum
int maximum(int x, int y, int z)
{
   // variável
   int max = x; // max recebe x

   // se y maior que max
   if (y > max)
   {
      max = y; // max recebe y
   } // end max

   // se z maior que max
   if (z > max)
   {
      // max recebe z
      max = z;
   } // end if z

   // retorna o maior valor
   return max;   
} // end maximum