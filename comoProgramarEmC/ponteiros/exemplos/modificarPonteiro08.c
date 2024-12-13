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

   printf("\nTENTENDO mODIFICAR Um PONTEIRO");
   printf("\nEm main, Cria variáveis:\n\tint x = 5;\n\tint y;\n");

   // cria constante ponteiro
   const int *const ptr = &x; // ptr recebe o endereço de x
   
   printf("\nEm main, Cria o ponteiro *ptr\nque recebe o endereco de &x:\n\tconst int *const ptr = &x;");

   // "%d", *ptr -  imprime o conteúdo do do ponteiro
   printf("\nEm main,\n\tprintf(\"%%d\", *ptr);\nImprime o valor de x:  %d", *ptr);

   printf("\n\tprintf(\"%%d\", x);\nImprime o valor de x:  %d", x);

   printf("\n\tprintf(\"%%p\", &x);\nImprime o endereco de x:  %p", &x);

   printf("\n\tprintf(\"%%p\", ptr);\nImprime o endereco de x:  %p", ptr);

   // *ptr = 7; // não permitido *ptr não é constante
   // ptr = &y; // proibido ptr não pode receber outro endereço

   printf("\nEm main:\n\t*ptr = 7; atribuicao invalida!");
   printf("\n\t*ptr = &y; Atribuicao invalida!\n");
   printf("\nO Ponteiro *ptr ja recebeu o endereco de x acima.\n");
   printf("\nPonteiro so recebe os valores NULL, 0 E Um  ENDERECO");

   printf("\n\n");
   return 0;

} // end main