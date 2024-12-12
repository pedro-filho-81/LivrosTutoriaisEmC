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
   printf("\nCria as variaveis:\n\tint x;\n\tint y;");

   // cria constante ponteiro
   int *const ptr = &x; // ptr recebe o endereço de x
   
   printf("\nCria a constante ponteiro:\n\tint *const ptr = &x;\nque recebe o endereco de x.");
   
   *ptr = 7; // permitido *ptr não é constante
   
   printf("\nTenta atribuir valor ao ponteiro constante:\n\t*ptr = 7;");
   
   // ptr = &y; // proibido ptr não pode receber outro endereço
   printf("\nTenta passar o endereco de y ao ponteiro:\n\tptr = &y;\n");
   
   printf("ptr nao pode receber outro endereÃ§o\n");
   
   printf("error: assignment of read-only variable 'ptr'");

   printf("\n\n");
   return 0;

} // end main