/**
 * Fig. 7.13: fig07_13.c
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
   printf("\nCria as variaveis:\nint x;\nint y;");

   // cria constante ponteiro
   int *const ptr = &x; // ptr recebe o endereço de x
   printf("\nCria a constante ponteiro:\nint *const ptr = &x; que recebe o endereco de x.");
   *ptr = 7; // permitido *ptr não é constante
   printf("\nTenta atribuir valor ao ponteiro constante: *ptr = 7;");
   // ptr = &y; // proibido ptr não pode receber outro endereço
   printf("\nTenta passar o endereco de y ao ponteiro: ptr = &y;\n");
   printf("ptr = &y; // proibido ptr nao pode receber outro endereÃ§o\n");
   printf("error: assignment of read-only variable 'ptr'\n");

   return 0;

} // end main