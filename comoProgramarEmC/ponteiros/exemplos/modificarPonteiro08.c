/**
 * Fig. 7.14: fig07_14.c  
 * Tentando modificar um ponteiro constante para dados 
 * constantes.
 * Deitel, Paul; Deitel, Harvey. C Coo Programar 
 * (Portuguese Edition) (p. 220). Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // variáveis
   int x = 5;
   int y;

   // cria constante ponteiro
   const int *const ptr = &x; // ptr recebe o endereço de x
   printf("%d", *ptr);

   *ptr = 7; // não permitido *ptr não é constante
   ptr = &y; // proibido ptr não pode receber outro endereço

   return 0;

} // end main