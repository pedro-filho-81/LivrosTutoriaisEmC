/**
 * /* Fig. 7.12: fig07_12.c
 * Tentando modificar dados por meio de um ponteiro não 
 * constante para dados constantes.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 218). Edição do Kindle. 
 */
#include <stdio.h>

// protótipo
void f(const int *xPtr);

int main()
{
   // variável
      int y = 2;

      // função recebe o valor de y
      f( y );

      return 0;

} // end main

// function
// *xPtr não pode ser usado 
// para modificar o valor da
// variável a qual ele aponta
void f(const int *xPtr)
{
   // não se modifica valor de ponteiro constante
   *xPtr = 100;
} // end f