/**
 * Fig. 5.3: fig05_03.c  2 Criando e usando uma 
 * função definida pelo programador 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 117). Edição do Kindle. 
 * 12/10/2024
 */

#include <stdio.h>
#include <stdlib.h>

// protótipo
int square( int y );

int main()
{
   // variável
   int x; // contador

   printf("\nint x;\nExibe o quadrado de x:\n");

   // loop for para calcular e exibir 
   // o quadrado de x a cada vez 
   for ( x = 1; x <= 10; x++)
   {
      // chama a fução square e passa o argumento x
      // e exibe o quadrado do valor retornado pela função
      printf("%d  ", square( x ));
   } // end for

   printf("\n\n");
   
   system("pause");

   return 0;   
} // end main

// cria função
int square( int y )
{
   // retorna o quadrado de y
   return y * y;
} // end square