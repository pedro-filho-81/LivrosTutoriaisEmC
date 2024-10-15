/**
 * /* Fig. 7.13: fig07_13.c
 * Tentando modificar um ponteiro constante 
 * para dados não constantes
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 220). Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // variáveis
   int x;
   int y;

   // cria constante ponteiro
   int *const ptr = &x; // ptr recebe o endereço de x

   *ptr = 7; // permitido *ptr não é constante
   ptr = &y; // proibido ptr não pode receber outro endereço

   return 0;
   
} // end main