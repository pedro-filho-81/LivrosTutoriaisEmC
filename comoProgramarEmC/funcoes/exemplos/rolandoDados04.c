/**
 * Fig. 5.8: fig05_08.c  
 * 2 Lançando um dado de seis lados 6000 vezes
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 126). Edição do Kindle. 
 * 12/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variáveis contadoras
   int frequency1 = 0;
   int frequency2 = 0;
   int frequency3 = 0;
   int frequency4 = 0;
   int frequency5 = 0;
   int frequency6 = 0;

   // contador de lançamento de 1 a 6000
   int roll;
   // o valor de um dado lançado de 1 a 6
   int face;

   // loop for para lançar o dado
   for ( roll = 1; roll <= 6000; roll++)
   {
      face = 1 + rand() % 6; // número aleatório de 1a6

      // determina o valor da face e incrementa o contador
      switch (face)
      {
      case 1: /* constant-expression */
         ++frequency1;
         break;

      case 2:
         ++frequency2;
         break;

      case 3:
         ++frequency3;
         break;

      case 4:
         ++frequency4;
         break;

      case 5:
         ++frequency5;
         break;
         
      case 6:
         ++frequency6;
         break;
      } // end switch
   } // end for   

   // exibe resultados
   printf("%s%13s\n", "Face", "Frequency");
   printf("  1%13d\n", frequency1);
   printf("  2%13d\n", frequency2);
   printf("  3%13d\n", frequency3);
   printf("  4%13d\n", frequency4);
   printf("  5%13d\n", frequency5);
   printf("  6%13d\n", frequency6);

   return 0;
} // end main